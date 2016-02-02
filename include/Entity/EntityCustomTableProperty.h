#ifndef INCLUDE_ENTITY_ENTITYCUSTOMTABLEPROPERTY_H_
#define INCLUDE_ENTITY_ENTITYCUSTOMTABLEPROPERTY_H_

#include "EntityCustomDataType.h"
#include "EntityTypeValue.h"

namespace NS_DataIndex {

    /**
     * 说明：自定义表属性
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class CustomTableProperty {

        CustomDataType *m_pCustomDataType;         //自定义数据类型对象

        EntityTypeValue *m_pEntityTypeValue;       //自定义类型的值

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
        bool setEntityTypeValue (EntityTypeValue *tValue);

        /**
         * 说明：获取自定义类型值
         * 返回值：自定义类型值
         * 更新时间：2016/2/1*/
         EntityTypeValue *getEntityTypeValue ();

         /**
          * 说明：设置自定义数据类型对象
          * 参数：自定义数据类型对
          * 返回值：是否设置成功
          * 更新时间：2016/2/2*/
         bool setCustomDataType (CustomDataType *pCustomDataType);

         /**
          * 说明：获取自定义数据类型对象
          * 返回值：自定义数据类型对象
          * 更新时间：2016/2/2*/
         CustomDataType *getCustomDataType ();
    };

}




#endif /* INCLUDE_ENTITY_ENTITYCUSTOMTABLEPROPERTY_H_ */
