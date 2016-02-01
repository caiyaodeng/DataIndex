#include "../../include/Entity/EntityDataTypeSet.h"
namespace NS_DataIndex {

    DataTypeSet::DataTypeSet ()
        :
        m_iDataTypeNum (0),
        m_setSingleDataTypeInformation (NULL) {
            m_setSingleDataTypeInformation = new SingleDataTypeInformation ();
    }

    DataTypeSet::~DataTypeSet () {
        if (m_setSingleDataTypeInformation != NULL) {
            delete m_setSingleDataTypeInformation;
            m_setSingleDataTypeInformation = NULL;
        }
    }

    /**
     * 说明：设置数据类型数量
     * 参数：数据类型数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool DataTypeSet::setDataTypeNumber (uint32_t iDataTypeNum) {
        m_iDataTypeNum = iDataTypeNum;
        if (m_iDataTypeNum == 0) {
            return false;
        }
        return true;
    }

    /*
     * 说明：获取数据类型长度
     * 返回值数据类型长度
     * 更新时间：2016/1/28*/
    uint32_t DataTypeSet::getDataTypeNumber () {
        return m_iDataTypeNum;
    }

    /**
     * 说明：添加一个类型
     * 参数：数据类型结构信息
     * 返回值：是否添加成功
     * 更新时间：2016/2/1*/
    bool DataTypeSet::addDataType (const SingleDataTypeInformation *psetSingleDataTypeInformation) {
        return true;
    }

    /**
     * 说明：删除一个类型
     * 参数：数据类型名称
     * 返回值：是否删除成功
     * 更新时间：2016/2/1*/
    bool DataTypeSet::deleteDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：查询一个类型
     * 参数：数据类型名称
     * 返回值：是否找到
     * 更新时间：2016/2/1*/
    bool DataTypeSet::quaryDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }
}





