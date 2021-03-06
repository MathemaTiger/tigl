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

#include "CPACSSkinSegment.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSSkinSegment::CPACSSkinSegment(CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
    }

    CPACSSkinSegment::~CPACSSkinSegment()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CTiglUIDManager& CPACSSkinSegment::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSSkinSegment::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSSkinSegment::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read attribute uID
        if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
            m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            if (m_uID.empty()) {
                LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
        }

        // read element sheetElementUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/sheetElementUID")) {
            m_sheetElementUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/sheetElementUID");
            if (m_sheetElementUID.empty()) {
                LOG(WARNING) << "Required element sheetElementUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element sheetElementUID is missing at xpath " << xpath;
        }

        // read element startFrameUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/startFrameUID")) {
            m_startFrameUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/startFrameUID");
            if (m_startFrameUID.empty()) {
                LOG(WARNING) << "Required element startFrameUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element startFrameUID is missing at xpath " << xpath;
        }

        // read element endFrameUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/endFrameUID")) {
            m_endFrameUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/endFrameUID");
            if (m_endFrameUID.empty()) {
                LOG(WARNING) << "Required element endFrameUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element endFrameUID is missing at xpath " << xpath;
        }

        // read element startStringerUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/startStringerUID")) {
            m_startStringerUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/startStringerUID");
            if (m_startStringerUID.empty()) {
                LOG(WARNING) << "Required element startStringerUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element startStringerUID is missing at xpath " << xpath;
        }

        // read element endStringerUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/endStringerUID")) {
            m_endStringerUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/endStringerUID");
            if (m_endStringerUID->empty()) {
                LOG(WARNING) << "Optional element endStringerUID is present but empty at xpath " << xpath;
            }
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSSkinSegment::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element sheetElementUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/sheetElementUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/sheetElementUID", m_sheetElementUID);

        // write element startFrameUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/startFrameUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/startFrameUID", m_startFrameUID);

        // write element endFrameUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/endFrameUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/endFrameUID", m_endFrameUID);

        // write element startStringerUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/startStringerUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/startStringerUID", m_startStringerUID);

        // write element endStringerUID
        if (m_endStringerUID) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/endStringerUID");
            tixi::TixiSaveElement(tixiHandle, xpath + "/endStringerUID", *m_endStringerUID);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/endStringerUID")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/endStringerUID");
            }
        }

    }

    const std::string& CPACSSkinSegment::GetUID() const
    {
        return m_uID;
    }

    void CPACSSkinSegment::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const std::string& CPACSSkinSegment::GetSheetElementUID() const
    {
        return m_sheetElementUID;
    }

    void CPACSSkinSegment::SetSheetElementUID(const std::string& value)
    {
        m_sheetElementUID = value;
    }

    const std::string& CPACSSkinSegment::GetStartFrameUID() const
    {
        return m_startFrameUID;
    }

    void CPACSSkinSegment::SetStartFrameUID(const std::string& value)
    {
        m_startFrameUID = value;
    }

    const std::string& CPACSSkinSegment::GetEndFrameUID() const
    {
        return m_endFrameUID;
    }

    void CPACSSkinSegment::SetEndFrameUID(const std::string& value)
    {
        m_endFrameUID = value;
    }

    const std::string& CPACSSkinSegment::GetStartStringerUID() const
    {
        return m_startStringerUID;
    }

    void CPACSSkinSegment::SetStartStringerUID(const std::string& value)
    {
        m_startStringerUID = value;
    }

    const boost::optional<std::string>& CPACSSkinSegment::GetEndStringerUID() const
    {
        return m_endStringerUID;
    }

    void CPACSSkinSegment::SetEndStringerUID(const boost::optional<std::string>& value)
    {
        m_endStringerUID = value;
    }

} // namespace generated
} // namespace tigl
