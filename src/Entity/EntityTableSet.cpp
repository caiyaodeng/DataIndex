#include "../../include/Entity/EntityTableSet.h"

namespace NS_DataIndex {

    TableSet::TableSet ()
        :
        m_iTableTotalNum (0),
        m_pSingleTablePropertyStructureSet (NULL) {
        m_pSingleTablePropertyStructureSet = new SingleTablePropertyStructure ();
    }

    TableSet::~TableSet () {
        if (m_pSingleTablePropertyStructureSet != NULL) {
            delete m_pSingleTablePropertyStructureSet;
            m_pSingleTablePropertyStructureSet = NULL;
        }
    }

    /**
     * 说明：设置表总数
     * 参数：表总数
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSet::setTableTotalNumber (uint32_t iTableTotalNum) {
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
    uint32_t TableSet::getTableTotalNumber () {
        return m_iTableTotalNum;
    }
}





