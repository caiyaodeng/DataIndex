#ifndef ENTITY_MY_TABLE_H_
#define ENTITY_MY_TABLE_H_

#include "EntityMyTableProperty.h"

namespace NS_DataIndex {

    /**
     * 说明：我的表
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class MyTable {
        MyTableProperty *objMyTablePropertyHead;    //我的表属性对象

    public:
        MyTable();
        ~MyTable();
    public:
    };
}



#endif /* ENTITY_MY_TABLE_H_ */
