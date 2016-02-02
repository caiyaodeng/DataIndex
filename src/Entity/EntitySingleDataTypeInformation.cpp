#include "../../include/Entity/EntitySingleDataTypeInformation.h"

namespace NS_DataIndex {

    SingleDataTypeInformation::SingleDataTypeInformation ()
    :
        m_iDataStructureLength (0),
        m_iDataNameLength (0),
        m_pDataName (0),
        m_iTableSerialNum (0),
        m_iStartBlockserialNum (0) {
            m_pDataName = (uint8_t *) malloc (20);
            memset (m_pDataName, 0, 20);
    }

    SingleDataTypeInformation::~SingleDataTypeInformation () {

    }

    /**
     * 说明：设置数据类型结构长度
     * 参数：数据类型结构长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool SingleDataTypeInformation::setDataStructureLength (uint32_t iDataStructureLength) {
        m_iDataStructureLength = iDataStructureLength;
        if (m_iDataStructureLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据类型名称,数据类型名称长度
     * 参数：数据类型名称,数据类型名称长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool SingleDataTypeInformation::setDataType (const uint8_t * pDataTypeName, uint32_t iDataTypeNameLength) {
        memcpy (m_pDataName, pDataTypeName, strlen ((char *)pDataTypeName));
        m_iDataNameLength = iDataTypeNameLength;
        if (m_pDataName == 0 || m_iDataNameLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置对应块号
     * 参数：对应块号
     * 返回值：是否设置成功
     * 更新时间:2016/1/27*/
    bool SingleDataTypeInformation::setTableSerialNumber (uint32_t iTableSerialNum) {
        m_iTableSerialNum = iTableSerialNum;
        if (m_iTableSerialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置引导块号
     * 参数：引导块号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleDataTypeInformation::setStartBlockserialNumber (uint32_t iStartBlockserialNum) {
        m_iStartBlockserialNum = iStartBlockserialNum;
        if (m_iStartBlockserialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取数据类型结构长度
     * 返回值：数据类型结构长度
     * 更新时间：2016/1/27*/
    uint32_t SingleDataTypeInformation::getDataStructureLength () {
        return m_iDataStructureLength;
    }

    /**
     * 说明：获取数据类型名称,数据类型名称长度
     * 参数：数据类型名称接收器,数据类型名称长度接收器
     * 返回值：是否获取成功
     * 更新时间：2016/1/27*/
    bool SingleDataTypeInformation::getDataType (uint8_t *&pDataTypeNameOut, uint32_t &iDataTypeNameLengthOut) {

        /*准备工作*/
        pDataTypeNameOut = (uint8_t *) malloc (20);
        memset (pDataTypeNameOut, 0, 20);
        iDataTypeNameLengthOut = 0;

        memcpy (pDataTypeNameOut, m_pDataName, strlen ((char *)pDataTypeNameOut));
        iDataTypeNameLengthOut = m_iDataNameLength;
        if (pDataTypeNameOut == 0 || iDataTypeNameLengthOut == 0) {
            return false;
        }
        return true;
    }
    /**
     * 说明：获取对应块号
     * 返回值：对应块号
     * 更新时间：2016/1/27*/
    uint32_t SingleDataTypeInformation::getTableSerialNumber () {
        return m_iTableSerialNum;
    }

    /**
     * 说明：获取引导块号
     * 返回值：引导块号
     * 更新时间：2016/1/28*/
    uint32_t SingleDataTypeInformation::getStartBlockserialNumber () {
        return m_iStartBlockserialNum;
    }
}




