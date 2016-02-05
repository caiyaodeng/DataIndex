#include "../../include/Entity/EntityCustomDataType.h"
namespace NS_DataIndex {

    CustomDataType::CustomDataType ()
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
    CustomDataType::~CustomDataType () {

    }

    /**
     * 说明：设置类型名称,类型名称长度
     * 参数：类型名称,
     * 返回值：是否设置成功,类型名称长度
     * 更新时间：2016/2/1*/
    bool CustomDataType::setType (const uint8_t *pTypeName, uint32_t iTypeNameLength) {
        memcpy (m_pTypeName, pTypeName, strlen ((char *)pTypeName));
        m_iTypeNameLength = iTypeNameLength;
        if (m_pTypeName == 0 || m_iTypeNameLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置表示类型,表示类型长度
     * 参数：表示类型,表示类型长度
     * 返回值：是否设置成功
     * 更新时间：2016/2/1*/
    bool CustomDataType::setRepresentationType (const uint8_t *pType, uint32_t iTypeLength) {
        memcpy (m_pType, pType, strlen ((char *)pType));
        m_iTypeLength = iTypeLength;
        if (m_pType == 0 || m_iTypeLength == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取类型名称,类型名称长度
     * 参数：类型名称接收器，类型名称长度接收器
     * 返回值：是否获取成功
     * 更新时间：2016/2/1*/
    bool CustomDataType::getType (uint8_t *&pTypeNameOut, uint32_t &iTypeNameLengthOut) {

        /*准备工作*/
        pTypeNameOut = (uint8_t *) malloc (20);
        memset (pTypeNameOut, 0, 20);
        iTypeNameLengthOut = 0;

        memcpy (pTypeNameOut, m_pTypeName, strlen ((char *)m_pTypeName));
         iTypeNameLengthOut = m_iTypeNameLength;

         /*验证有效性*/
         if (pTypeNameOut == 0 || pTypeNameOut == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取表示类型,表示类型长度
     * 参数：表示类型接收器，表示类型长度接收器
     * 返回值：是否获取成功
     * 更新时间：2016/2/1*/
    bool CustomDataType::getRepresentationType (uint8_t *&pRepresentationTypeNameOut, uint32_t &iRepresentationTypeNameLengthOut) {

        /*准备工作*/
        pRepresentationTypeNameOut = (uint8_t *) malloc (20);
        memset (pRepresentationTypeNameOut, 0, 20);
        iRepresentationTypeNameLengthOut = 0;

        memcpy (pRepresentationTypeNameOut, m_pTypeName, strlen ((char *)m_pTypeName));
        iRepresentationTypeNameLengthOut = m_iTypeNameLength;

        /*验证有效性*/
        if (pRepresentationTypeNameOut == 0 || iRepresentationTypeNameLengthOut == 0) {
            return false;
        }
        return true;
    }
}



