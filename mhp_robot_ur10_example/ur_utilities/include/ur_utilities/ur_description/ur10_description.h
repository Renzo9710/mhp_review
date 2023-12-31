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

#ifndef UR10_DESCRIPTION_H
#define UR10_DESCRIPTION_H

#include <ur_utilities/ur_description/ur_description.h>

namespace mhp_robot {
namespace robot_description {

class UR10Description : public URDescription
{
 public:
    using Ptr  = std::shared_ptr<UR10Description>;
    using UPtr = std::unique_ptr<UR10Description>;

    UR10Description();

 private:
    void initializeSegmentStructs();
};

}  // namespace robot_description
}  // namespace mhp_robot

#endif  // UR10_DESCRIPTION_H
