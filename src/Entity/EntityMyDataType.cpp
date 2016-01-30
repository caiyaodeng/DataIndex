#include "../../include/Entity/EntityMyDataType.h"

namespace NS_DataIndex {

    MyDataType::MyDataType ()
        :
            m_pTypeName (0),
            m_iTypeNameLength (0),
            m_pType(0),
            m_iTypeLength(0) {
                m_pTypeName = (uint8_t *) malloc (20);
                memset (m_pTypeName, 0, 20);
                m_pType = (uint8_t *) malloc (20);
                memset (m_pType, 0, 20);
    }
    MyDataType::~MyDataType () {

    }

    /**
     * 说明：设置类型名称
     * 参数：类型名称
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool MyDataType::setTypeName (const uint8_t *pTypeName) {
        memcpy (m_pTypeName, pTypeName, strlen ((char *)pTypeName));
        if (m_pTypeName == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置类型名称长度
     * 参数：类型名称长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool MyDataType::setTypeNameLength (const uint32_t iTypeNameLength) {
        m_iTypeNameLength = iTypeNameLength;
        if (m_iTypeNameLength == 0) {
            return false;
        }
            return true;
    }

    /**
     * 说明：设置表示类型
     * 参数：表示类型
     * 返回值：是否设置成功
     * 更新时间：2016/1/29*/
    bool MyDataType::setType (const uint8_t *pType) {
        memcpy (m_pType, pType, strlen ((char *)pType));
        if (m_pType == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置表示类型长度
     * 参数：表示类型长度
     * 返回值：是否设置成功
     * 更新时间：2016/1/29*/
    bool MyDataType::setTypelength (const uint32_t iTypeLength) {
        m_iTypeLength = iTypeLength;
        if (m_iTypeLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取类型名称
     * 返回值：类型名称
     * 更新时间：2016/1/28*/
    const
    uint8_t *MyDataType::getTypeName () {
        return m_pTypeName;
    }

    /**
     * 说明：获取类型名称长度
     * 返回值：类型名称长度
     * 更新时间：2016/1/28*/
    const
    uint32_t MyDataType::getTypeNameLength () {
        return m_iTypeNameLength;
    }

    /**
     * 说明：获取
     * 返回值：表示类型
     * 更新时间：2016/1/29*/
    const
    uint8_t *MyDataType::getType () {
        return m_pType;
    }

    /**
     * 说明：获取
     * 返回值：表示类型长度
     * 更新时间：2016/1/29*/
    const
    uint32_t MyDataType::getTypeLength () {
        return m_iTypeLength;
    }
}
