#include "EntityDataTypeSet.h"
namespace NS_DataIndex {

    DataTypeSet::DataTypeSet ()
        :
        m_iDataTypeNum (0),
        m_objSingleDataTypeInformation (NULL) {
            m_objSingleDataTypeInformation = new SingleDataTypeInformation ();
    }

    DataTypeSet::~DataTypeSet () {
        if (m_objSingleDataTypeInformation != NULL) {
            delete m_objSingleDataTypeInformation;
            m_objSingleDataTypeInformation = NULL;
        }
    }


    bool DataTypeSet::setDataTypeNumber (const uint32_t iDataTypeNum) {
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
    const
    uint32_t DataTypeSet::getDataTypeNumber () {
        return m_iDataTypeNum;
    }
}





