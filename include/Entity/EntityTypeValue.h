#ifndef _ENTITY_TYPE_VALUE_H_
#define _ENTITY_TYPE_VALUE_H_

namespace NS_DataIndex {

    /**
    * 说明：自定义类型的值
    * 创建人：蔡矅镫
    * 更新时间：2016/1/29*/
    union EntityTypeValue {
        uint32_t m_int;
        uint8_t m_unchar;
        uint8_t *m_pStr;    //first 4 bit for length
        bool m_is;
    };

}

#endif
