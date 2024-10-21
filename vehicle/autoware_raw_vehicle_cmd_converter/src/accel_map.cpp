//  Copyright 2021 Tier IV, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#include "autoware_raw_vehicle_cmd_converter/accel_map.hpp"

#include "autoware/interpolation/linear_interpolation.hpp"

#include <string>
#include <vector>

namespace autoware::raw_vehicle_cmd_converter
{
bool AccelMap::readAccelMapFromCSV(const std::string & csv_path, const bool validation)
{
  CSVLoader csv(csv_path);
  std::vector<std::vector<std::string>> table;

  if (!csv.readCSV(table)) {
    return false;
  }

  vehicle_name_ = table[0][0];
  vel_index_ = CSVLoader::getColumnIndex(table);
  throttle_index_ = CSVLoader::getRowIndex(table);
  accel_map_ = CSVLoader::getMap(table);
  return !validation || CSVLoader::validateMap(accel_map_, true);
}

bool AccelMap::getThrottle(const double acc, double vel, double & throttle) const
{
  std::vector<double> interpolated_acc_vec;
  const double clamped_vel = CSVLoader::clampValue(vel, vel_index_, "throttle: vel");
  // (throttle, vel, acc) map => (throttle, acc) map by fixing vel
  interpolated_acc_vec.reserve(accel_map_.size());
  for (const std::vector<double> & accelerations : accel_map_) {
    interpolated_acc_vec.push_back(
      autoware::interpolation::lerp(vel_index_, accelerations, clamped_vel));
  }
  // calculate throttle
  // When the desired acceleration is smaller than the throttle area, return false => brake sequence
  // When the desired acceleration is greater than the throttle area, return max throttle
  if (acc < interpolated_acc_vec.front()) {
    return false;
  }
  if (interpolated_acc_vec.back() < acc) {
    throttle = throttle_index_.back();
    return true;
  }
  throttle = autoware::interpolation::lerp(interpolated_acc_vec, throttle_index_, acc);
  return true;
}

bool AccelMap::getAcceleration(const double throttle, const double vel, double & acc) const
{
  std::vector<double> interpolated_acc_vec;
  const double clamped_vel = CSVLoader::clampValue(vel, vel_index_, "throttle: vel");

  // (throttle, vel, acc) map => (throttle, acc) map by fixing vel
  interpolated_acc_vec.reserve(accel_map_.size());
  for (const auto & acc_vec : accel_map_) {
    interpolated_acc_vec.push_back(autoware::interpolation::lerp(vel_index_, acc_vec, clamped_vel));
  }

  // calculate throttle
  // When the desired acceleration is smaller than the throttle area, return min acc
  // When the desired acceleration is greater than the throttle area, return max acc
  const double clamped_throttle = CSVLoader::clampValue(throttle, throttle_index_, "throttle: acc");
  acc = autoware::interpolation::lerp(throttle_index_, interpolated_acc_vec, clamped_throttle);

  return true;
}
}  // namespace autoware::raw_vehicle_cmd_converter
