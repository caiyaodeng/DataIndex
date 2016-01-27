#include "EntityDataTypeInformation.h"

namespace NS_DataIndex {

    DataTypeInformation::DataTypeInformation()
    :
        m_iDataStructureLength(-1),
        m_iDataNameLength(-1),
        m_iDataName(0),
        m_iBlockNumber(-1) {

    }

    DataTypeInformation::~DataTypeInformation() {

    }

    /**
     * 说明：设置数据类型结构长度
     * 参数：数据类型结构长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeInformation::setDataStructureLength(uint32_t iDataStructureLength) {
        m_iDataStructureLength = iDataStructureLength;
        if (m_iDataStructureLength == -1) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据类型名称长度
     * 参数：数据类型名称长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeInformation::setDataNameLength(uint32_t iDataNameLength) {
        m_iDataNameLength = iDataNameLength;
        if (m_iDataNameLength == -1) {
            return true;
        }
    }

    /**
     * 说明：设置数据类型名称
     * 参数：数据类型名称
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeInformation::setDataName(uint8_t * iDataName) {
        memcpy(m_iDataName,iDataName,strlen((char *)iDataName));
        if (m_iDataName == 0)
            return false;
        return true;
    }

    /**
     * 说明：设置对应块号
     * 参数：对应块号
     * 返回值：是否设置成功
     * 更新时间:2016/1/27*/
    bool DataTypeInformation::setBlockNumber(uint32_t iBlockNumber) {
        m_iBlockNumber = iBlockNumber;
        if (m_iBlockNumber == -1) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取数据类型结构长度
     * 返回值：数据类型结构长度
     * 更新时间：2016/1/27*/
    uint32_t DataTypeInformation::getDataStructureLength() {
        return m_iDataStructureLength;
    }

    /**
     * 说明：获取数据类型名称长度
     * 返回值：数据类型名称长度
     * 更新时间：2016/1/27*/
    uint32_t DataTypeInformation::getDataNameLength() {
        return m_iDataNameLength;
    }


    /**
     * 说明：获取数据类型名称
     * 返回值：数据类型名称
     * 更新时间：2016/1/27*/
    uint8_t *DataTypeInformation::getDataName() {
        return m_iDataName;
    }

    /**
     * 说明：获取对应块号
     * 返回值：对应块号
     * 更新时间：2016/1/27*/
    uint32_t DataTypeInformation::getBlockNumber() {
        return m_iBlockNumber;
    }



}

