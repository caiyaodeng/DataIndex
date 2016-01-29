#include "EntityMyDataType.h"

namespace NS_DataIndex {

    MyDataType::MyDataType ()
        :
            m_pTypeName (0),
            m_iTypeNameLength (0) {
                m_pTypeName = (uint8_t *) malloc (20);
                memset (m_pTypeName, 0, 20);
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

}
