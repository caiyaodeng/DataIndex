#include "EntityAllDataTypeSet.h"
namespace NS_DataIndex {

    AllDataTypeSet::AllDataTypeSet()
        :
        m_iDataTypeNumber(-1),
        m_objDataTypeInformation(NULL){
            m_objDataTypeInformation = new DataTypeInformation();
    }

    AllDataTypeSet::~AllDataTypeSet(){
        if (m_objDataTypeInformation != NULL){
            delete m_objDataTypeInformation;
            m_objDataTypeInformation = NULL;
        }
    }


    bool AllDataTypeSet::setDataTypeNumber(const uint32_t iDataTypeNumber) {
        m_iDataTypeNumber = iDataTypeNumber;
        if (m_iDataTypeNumber == -1)
            return false;
        return true;
    }

    /*
     * 说明：获取数据类型长度
     * 返回值数据类型长度
     * 更新时间：2016/1/28*/
    const
    uint32_t AllDataTypeSet::getDataTypeNumber() {
        return m_iDataTypeNumber;
    }
}

