#include "EntitySingleTablePropertyStructure.h"

namespace NS_DataIndex {

    SingleTablePropertyStructure::SingleTablePropertyStructure()
            :
                objMyTablePropertyHead(NULL),
                m_iTablePropertyNumber(0) {
        objMyTablePropertyHead = new MyTableProperty();
    }

    SingleTablePropertyStructure::~SingleTablePropertyStructure() {
        if (objMyTablePropertyHead != NULL) {
            delete objMyTablePropertyHead;
            objMyTablePropertyHead = NULL;
        }
    }

    /**
     * 说明：设置表属性数量
     * 参数：表属性数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleTablePropertyStructure::setTablePropertyNumber(const uint32_t iTablePropertyNumber) {
        m_iTablePropertyNumber = iTablePropertyNumber;
        if (m_iTablePropertyNumber == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取表属性数量
     * 返回值：表属性数量
     * 更新时间：2016/1/28*/
    const
    uint32_t SingleTablePropertyStructure::getTablePropertyNumber() {
        return m_iTablePropertyNumber;
    }

}
