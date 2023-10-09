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

#ifndef STATE_OBSERVER_H
#define STATE_OBSERVER_H

#include <mutex>
#include <vector>

namespace mhp_robot {
namespace robot_misc {

class StateObserver
{
 public:
    static std::mutex _mutex;
    static std::vector<double> _joint_state;
    static double _gripper_state;
};

}  // namespace robot_misc
}  // namespace mhp_robot

#endif  // STATE_OBSERVER_H
