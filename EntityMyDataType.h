#ifndef ENTITY_MY_DATA_TYPE_H_
#define ENTITY_MY_DATA_TYPE_H_


#include <stdint.h>

namespace NS_DataIndex {

    /**
     * 说明：我的数据类型
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class MyDataType {
        uint8_t *m_iTypeName;       //类型名称
        uint32_t m_iTypeNameLength; //类型名称长度
        uint8_t *m_iType;           //表示类型
        uint32_t m_iTypelength;     //表示类型长度

    public:
        MyDataType();
        ~MyDataType();
    public:
    };

}




#endif /* ENTITY_MY_DATA_TYPE_H_ */
