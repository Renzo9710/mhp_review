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

#include <mhp_robot/robot_misc/planning_delay.h>

namespace mhp_robot {
namespace robot_misc {

double PlanningDelay::_delay = 0.0;
std::mutex PlanningDelay::_mutex;

}  // namespace robot_misc
}  // namespace mhp_robot