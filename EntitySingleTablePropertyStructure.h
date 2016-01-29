#ifndef ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_
#define ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_

#include "EntityMyTableProperty.h"

namespace NS_DataIndex {

    /**
     * 说明：单表属性结构
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class SingleTablePropertyStructure {

            MyTableProperty *objMyTablePropertyHead;    //我的表属性对象
            uint32_t m_iTablePropertyNum;            //表属性数量

        public:
            explicit
            SingleTablePropertyStructure();
            ~SingleTablePropertyStructure();

        public:
            /**
             * 说明：设置表属性数量
             * 参数：表属性数量
             * 返回值：是否设置成功
             * 更新时间：2016/1/28*/
            bool setTablePropertyNumber(const uint32_t iTablePropertyNum);

            /**
             * 说明：获取表属性数量
             * 返回值：表属性数量
             * 更新时间：2016/1/28*/
            const
            uint32_t getTablePropertyNumber();

    };
}


#endif /* ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_ */
