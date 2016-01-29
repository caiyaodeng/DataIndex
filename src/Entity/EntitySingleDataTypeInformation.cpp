#include "../../include/Entity/EntitySingleDataTypeInformation.h"

namespace NS_DataIndex {

    SingleDataTypeInformation::SingleDataTypeInformation ()
    :
        m_iDataStructureLength (0),
        m_iDataNameLength (0),
        m_pDataName (0),
        m_iBlockserialNum (0),
        m_iBootBlockNum (0) {
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
    bool SingleDataTypeInformation::setDataStructureLength (const uint32_t iDataStructureLength) {
        m_iDataStructureLength = iDataStructureLength;
        if (m_iDataStructureLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据类型名称长度
     * 参数：数据类型名称长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool SingleDataTypeInformation::setDataNameLength (const uint32_t iDataNameLength) {
        m_iDataNameLength = iDataNameLength;
        if (m_iDataNameLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据类型名称
     * 参数：数据类型名称
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool SingleDataTypeInformation::setDataName (const uint8_t * pDataName) {
        memcpy (m_pDataName, pDataName, strlen ((char *)pDataName));
        if (m_pDataName == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置对应块号
     * 参数：对应块号
     * 返回值：是否设置成功
     * 更新时间:2016/1/27*/
    bool SingleDataTypeInformation::setBlockserialNumber (const uint32_t iBlockNum) {
        m_iBlockserialNum = iBlockNum;
        if (m_iBlockserialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置引导块号
     * 参数：引导块号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleDataTypeInformation::setBootBlockNumber (const uint32_t iBootBlockNum) {
        m_iBootBlockNum = iBootBlockNum;
        if (m_iBootBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取数据类型结构长度
     * 返回值：数据类型结构长度
     * 更新时间：2016/1/27*/
    const
    uint32_t SingleDataTypeInformation::getDataStructureLength () {
        return m_iDataStructureLength;
    }

    /**
     * 说明：获取数据类型名称长度
     * 返回值：数据类型名称长度
     * 更新时间：2016/1/27*/
    const
    uint32_t SingleDataTypeInformation::getDataNameLength () {
        return m_iDataNameLength;
    }

    /**
     * 说明：获取数据类型名称
     * 返回值：数据类型名称
     * 更新时间：2016/1/27*/
    const
    uint8_t *SingleDataTypeInformation::getDataName () {
        return m_pDataName;
    }

    /**
     * 说明：获取对应块号
     * 返回值：对应块号
     * 更新时间：2016/1/27*/
    const
    uint32_t SingleDataTypeInformation::getBlockserialNumber () {
        return m_iBlockserialNum;
    }

    /**
     * 说明：获取引导块号
     * 返回值：引导块号
     * 更新时间：2016/1/28*/
    const
    uint32_t SingleDataTypeInformation::getBootBlockNumber () {
        return m_iBootBlockNum;
    }
}




