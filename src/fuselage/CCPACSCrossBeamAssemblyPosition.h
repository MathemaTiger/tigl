/*
* Copyright (c) 2018 Airbus Defence and Space and RISC Software GmbH
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include <boost/optional.hpp>
#include <TopoDS_Shape.hxx>

#include "generated/CPACSCrossBeamAssemblyPosition.h"

namespace tigl
{
class CCPACSCrossBeamAssemblyPosition : public generated::CPACSCrossBeamAssemblyPosition
{
public:
    TIGL_EXPORT CCPACSCrossBeamAssemblyPosition(CCPACSCargoCrossBeamsAssembly* parent, CTiglUIDManager* uidMgr);

    TIGL_EXPORT void Invalidate();

    TIGL_EXPORT TopoDS_Shape GetGeometry(bool just1DElements, TiglCoordinateSystem cs = GLOBAL_COORDINATE_SYSTEM);
    TIGL_EXPORT TopoDS_Shape GetCutGeometry(TiglCoordinateSystem cs = GLOBAL_COORDINATE_SYSTEM);
	
private:
    void BuildCutGeometry();
    void BuildGeometry(bool just1DElements);
private:
    boost::optional<TopoDS_Shape> m_geometry[2]; // [0] is 3D, [1] is 1D
    boost::optional<TopoDS_Shape> m_cutGeometry;
};

} // namespace tigl
