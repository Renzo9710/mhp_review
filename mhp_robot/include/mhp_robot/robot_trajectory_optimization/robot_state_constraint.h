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

#ifndef ROBOT_STATE_CONSTRAINT_H
#define ROBOT_STATE_CONSTRAINT_H

#include <Eigen/Core>
#include <memory>

namespace mhp_robot {
namespace robot_trajectory_optimization {

class RobotStateConstraint
{
 public:
    using Ptr  = std::shared_ptr<RobotStateConstraint>;
    using UPtr = std::unique_ptr<RobotStateConstraint>;

    RobotStateConstraint(int dimension);

    RobotStateConstraint(const RobotStateConstraint&)            = delete;
    RobotStateConstraint(RobotStateConstraint&&)                 = default;
    RobotStateConstraint& operator=(const RobotStateConstraint&) = delete;
    RobotStateConstraint& operator=(RobotStateConstraint&&)      = default;
    virtual ~RobotStateConstraint() {}

    virtual void compute(const Eigen::Ref<const Eigen::VectorXd>& x_k, Eigen::Ref<Eigen::VectorXd> cost) const;
    virtual int getDimension() const;

    virtual void setLimits(const Eigen::Ref<const Eigen::ArrayXd>& min, const Eigen::Ref<const Eigen::ArrayXd>& max);
    virtual void getLimits(Eigen::Ref<Eigen::VectorXd> min, Eigen::Ref<Eigen::VectorXd> max) const;

 protected:
    Eigen::ArrayXd _min;
    Eigen::ArrayXd _max;

    bool _active = true;
    int _dim     = 0;
};

}  // namespace robot_trajectory_optimization
}  // namespace mhp_robot

#endif  // ROBOT_STATE_CONSTRAINT_H
