#include "../../include/Entity/EntityCustomTableProperty.h"

namespace NS_DataIndex {

    CustomTableProperty::CustomTableProperty ()
        :
                m_pCustomDataType (NULL),
                m_pEntityTypeValue (NULL) {
                m_pCustomDataType = new CustomDataType ();
                m_pEntityTypeValue = new EntityTypeValue ();
        }

    CustomTableProperty::~CustomTableProperty () {
        if (m_pCustomDataType != NULL) {
            delete m_pCustomDataType;
            m_pCustomDataType = NULL;
        }

        if (m_pEntityTypeValue != NULL) {
            delete m_pEntityTypeValue;
            m_pEntityTypeValue = NULL;
        }
    }

    /**
     * 说明：设置自定义类型值
     * 参数：自定义类型值
     * 返回值：是否设置成功
     * 更新时间：2016/2/1*/
    bool CustomTableProperty::setEntityTypeValue (EntityTypeValue *tValue) {
        memcpy (m_pEntityTypeValue, tValue, EntityTypeValue);
        return true;
    }

    /**
     * 说明：获取自定义类型值
     * 返回值：自定义类型值
     * 更新时间：2016/2/1*/
    EntityTypeValue *CustomTableProperty::getEntityTypeValue () {
        return m_pEntityTypeValue;
    }

    /**
     * 说明：设置自定义数据类型对象
     * 参数：自定义数据类型对
     * 返回值：是否设置成功
     * 更新时间：2016/2/2*/
    bool CustomTableProperty::setCustomDataType (CustomDataType *pCustomDataType) {
        memcpy (m_pCustomDataType, pCustomDataType, 16);
        return true;
    }

    /**
     * 说明：获取自定义数据类型对象
     * 返回值：自定义数据类型对象
     * 更新时间：2016/2/2*/
    CustomDataType *CustomTableProperty::getCustomDataType () {
        return m_pCustomDataType;
    }
}

