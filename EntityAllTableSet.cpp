#include "EntityAllTableSet.h"

namespace NS_DataIndex {

    AllTableSet::AllTableSet()
        :
        m_iTableTotalNumber(0),
        m_objSingleTablePropertyStructure(NULL) {
            m_objSingleTablePropertyStructure = new SingleTablePropertyStructure();
    }

    AllTableSet::~AllTableSet() {
        if (m_objSingleTablePropertyStructure != NULL) {
            delete m_objSingleTablePropertyStructure;
            m_objSingleTablePropertyStructure = NULL;
        }
    }

    /**
     * 说明：设置表总数
     * 参数：表总数
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool AllTableSet::setTableTotalNumber(const uint32_t iTableTotalNumber) {
        m_iTableTotalNumber = iTableTotalNumber;
        if (m_iTableTotalNumber != 0) {
            return false;
        }
            return true;
    }

    /**
     * 说明：获取表总数
     * 返回值：表总数
     * 更新时间：2016/1/28*/
    uint32_t AllTableSet::getTableTotalNumber() {
        return m_iTableTotalNumber;
    }
}

