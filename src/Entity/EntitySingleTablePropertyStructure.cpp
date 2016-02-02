#include "../../include/Entity/EntitySingleTablePropertyStructure.h"

namespace NS_DataIndex {

    SingleTablePropertyStructure::SingleTablePropertyStructure ()
            :
                m_pHeadCustomTableProperty (NULL),
                m_iTablePropertyNum (0) {
        m_pHeadCustomTableProperty = new CustomTableProperty ();
    }

    SingleTablePropertyStructure::~SingleTablePropertyStructure () {
        if (m_pHeadCustomTableProperty != NULL) {
            delete m_pHeadCustomTableProperty;
            m_pHeadCustomTableProperty = NULL;
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

    /**
     * 说明：添加一个类型
     * 参数：数据类型结构信息
     * 返回值：是否添加成功
     * 更新时间：2016/2/1*/
    bool SingleTablePropertyStructure::addDataType (const CustomTableProperty *pHeadCustomTableProperty) {
        return true;
    }

    /**
     * 说明：删除一个类型
     * 参数：数据类型名称
     * 返回值：是否删除成功
     * 更新时间：2016/2/1*/
    bool SingleTablePropertyStructure::deleteDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：查询一个类型
     * 参数：数据类型名称
     * 返回值：是否找到
     * 更新时间：2016/2/1*/
    bool SingleTablePropertyStructure::quaryDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }
}
