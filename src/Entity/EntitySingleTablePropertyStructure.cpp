#include "../../include/Entity/EntitySingleTablePropertyStructure.h"

namespace NS_DataIndex {

    SingleTablePropertyStructure::SingleTablePropertyStructure ()
            :
                m_pMyTablePropertyHead (NULL),
                m_iTablePropertyNum (0) {
        m_pMyTablePropertyHead = new MyTableProperty ();
    }

    SingleTablePropertyStructure::~SingleTablePropertyStructure () {
        if (m_pMyTablePropertyHead != NULL) {
            delete m_pMyTablePropertyHead;
            m_pMyTablePropertyHead = NULL;
        }
    }

    /**
     * 说明：设置表属性数量
     * 参数：表属性数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleTablePropertyStructure::setTablePropertyNumber (uint32_t iTablePropertyNum) {
        m_iTablePropertyNum = iTablePropertyNum;
        if (m_iTablePropertyNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取表属性数量
     * 返回值：表属性数量
     * 更新时间：2016/1/28*/
    uint32_t SingleTablePropertyStructure::getTablePropertyNumber () {
        return m_iTablePropertyNum;
    }

}
