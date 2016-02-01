#ifndef INCLUDE_ENTITY_ENTITYCUSTOMTABLEPROPERTY_H_
#define INCLUDE_ENTITY_ENTITYCUSTOMTABLEPROPERTY_H_

#include "EntityCustomDataType.h"
#include "EntityTypeValue.h"

namespace NS_DataIndex {

    template <typename T>
    /**
     * 说明：自定义表属性
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class CustomTableProperty {

        CustomDataType *m_objCustomDataType;                //自定义数据类型对象

        EntityTypeValue <uint32_t>* iEntityTypeValue;       //自定义类型的值
        EntityTypeValue <uint8_t*>* pEntityTypeValue;       //自定义类型的值

        public:
        explicit
        CustomTableProperty ();
        ~CustomTableProperty ();

    public:
        /**
         * 说明：设置自定义类型值
         * 参数：自定义类型值
         * 返回值：是否设置成功
         * 更新时间：2016/2/1*/
        bool setEntityTypeValue (uint8_t* tValue);

        /**
         * 说明：设置自定义类型值
         * 参数：自定义类型值
         * 返回值：是否设置成功
         * 更新时间：2016/2/1*/
        bool setEntityTypeValue (uint32_t tValue);

        /**
         * 说明：获取自定义类型值
         * 返回值：自定义类型值
         * 更新时间：2016/2/1*/
        uint8_t* getEntityTypeValue ();

        /**
         * 说明：获取自定义类型值
         * 返回值：自定义类型值
         * 更新时间：2016/2/1*/
        uint32_t getEntityTypeValue ();
    };

}




#endif /* INCLUDE_ENTITY_ENTITYCUSTOMTABLEPROPERTY_H_ */
