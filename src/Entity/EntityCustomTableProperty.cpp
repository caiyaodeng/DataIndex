#include "../../include/Entity/EntityCustomTableProperty.h"

namespace NS_DataIndex {

    CustomTableProperty::CustomTableProperty ()
        :
                m_objCustomDataType (NULL) {
                m_objCustomDataType = new CustomDataType ();
        }

    CustomTableProperty::~CustomTableProperty () {
        if (m_objCustomDataType != NULL) {
            delete m_objCustomDataType;
            m_objCustomDataType = NULL;
        }
    }

    /**
     * 说明：设置自定义类型值
     * 参数：自定义类型值
     * 返回值：是否设置成功
     * 更新时间：2016/2/1*/
    bool CustomTableProperty<uint8_t*>::setEntityTypeValue (uint8_t* tValue) {
        pEntityTypeValue->m_tValue = tValue;
        return true;
    }

    /**
     * 说明：设置自定义类型值
     * 参数：自定义类型值
     * 返回值：是否设置成功
     * 更新时间：2016/2/1*/
    bool CustomTableProperty<uint32_t>::setEntityTypeValue (uint32_t tValue) {
        iEntityTypeValue->m_tValue = tValue;
        return true;
    }

    /**
     * 说明：获取自定义类型值
     * 返回值：自定义类型值
     * 更新时间：2016/2/1*/
    uint8_t* CustomTableProperty<uint8_t *>::getEntityTypeValue () {
        return pEntityTypeValue->m_tValue;
    }

    uint32_t CustomTableProperty<uint32_t>::getEntityTypeValue () {
        return iEntityTypeValue->m_tValue;
    }
}

