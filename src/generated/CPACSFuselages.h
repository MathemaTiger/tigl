// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>
#include <tixi.h>
#include <typeinfo>
#include <vector>
#include "CTiglError.h"
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSFuselage;
class CCPACSAircraftModel;
class CCPACSRotorcraftModel;

namespace generated
{
    // This class is used in:
    // CPACSAircraftModel
    // CPACSRotorcraftModel

    // generated from /xsd:schema/xsd:complexType[387]
    class CPACSFuselages
    {
    public:
        TIGL_EXPORT CPACSFuselages(CCPACSAircraftModel* parent, CTiglUIDManager* uidMgr);
        TIGL_EXPORT CPACSFuselages(CCPACSRotorcraftModel* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSFuselages();

        template<typename P>
        bool IsParent() const
        {
            return m_parentType != NULL && *m_parentType == typeid(P);
        }

        template<typename P>
        P* GetParent() const
        {
#ifdef HAVE_STDIS_SAME
            static_assert(std::is_same<P, CCPACSAircraftModel>::value || std::is_same<P, CCPACSRotorcraftModel>::value, "template argument for P is not a parent class of CPACSFuselages");
#endif
            if (!IsParent<P>()) {
                throw CTiglError("bad parent");
            }
            return static_cast<P*>(m_parent);
        }

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSFuselage> >& GetFuselages() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSFuselage> >& GetFuselages();

        TIGL_EXPORT virtual CCPACSFuselage& AddFuselage();
        TIGL_EXPORT virtual void RemoveFuselage(CCPACSFuselage& ref);

    protected:
        void* m_parent;
        const std::type_info* m_parentType;

        CTiglUIDManager* m_uidMgr;

        std::vector<unique_ptr<CCPACSFuselage> > m_fuselages;

    private:
#ifdef HAVE_CPP11
        CPACSFuselages(const CPACSFuselages&) = delete;
        CPACSFuselages& operator=(const CPACSFuselages&) = delete;

        CPACSFuselages(CPACSFuselages&&) = delete;
        CPACSFuselages& operator=(CPACSFuselages&&) = delete;
#else
        CPACSFuselages(const CPACSFuselages&);
        CPACSFuselages& operator=(const CPACSFuselages&);
#endif
    };
} // namespace generated

// CPACSFuselages is customized, use type CCPACSFuselages directly
} // namespace tigl
