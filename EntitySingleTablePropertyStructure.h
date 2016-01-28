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
            uint32_t m_iTablePropertyNumber;            //表属性数量

        public:
            SingleTablePropertyStructure();
            ~SingleTablePropertyStructure();
        public:
        };
    };
}



#endif /* ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_ */
