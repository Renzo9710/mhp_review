/*********************************************************************
 *
 *  Software License Agreement
 *
 *  Copyright (c) 2023,
 *  ANONYMIZED
 *  All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *  Authors: ANONYMIZED
 *  Modifier(s): ANONYMIZED
 *********************************************************************/

#ifndef UR_BASE_ACCELERATION_CONSTRAINT_MHP_PLANNER_H
#define UR_BASE_ACCELERATION_CONSTRAINT_MHP_PLANNER_H

#include <mhp_robot/robot_trajectory_optimization/robot_acceleration_constraint.h>
#include <ros/ros.h>
#include <Eigen/Core>
#include <memory>

namespace mhp_planner {

class URBaseAccelerationConstraint : public mhp_robot::robot_trajectory_optimization::RobotAccelerationConstraint
{
 public:
    using Ptr  = std::shared_ptr<URBaseAccelerationConstraint>;
    using UPtr = std::unique_ptr<URBaseAccelerationConstraint>;

    URBaseAccelerationConstraint() : mhp_robot::robot_trajectory_optimization::RobotAccelerationConstraint(6) {}

    virtual Ptr getInstance() const = 0;

    virtual bool fromParameterServer(const std::string& ns) = 0;
};

}  // namespace mhp_planner

#endif  // UR_BASE_ACCELERATION_CONSTRAINT_MHP_PLANNER_H
