#include "EntityTableSet.h"

namespace NS_DataIndex {

    TableSet::TableSet()
        :
        m_iTableTotalNum(0),
        m_objSingleTablePropertyStructure(NULL) {
            m_objSingleTablePropertyStructure = new SingleTablePropertyStructure();
    }

    TableSet::~TableSet() {
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
    bool TableSet::setTableTotalNumber(const uint32_t iTableTotalNum) {
        m_iTableTotalNum = iTableTotalNum;
        if (m_iTableTotalNum != 0) {
            return false;
        }
            return true;
    }

    /**
     * 说明：获取表总数
     * 返回值：表总数
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSet::getTableTotalNumber() {
        return m_iTableTotalNum;
    }
}





