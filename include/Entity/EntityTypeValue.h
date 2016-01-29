/*************************************************************************
	> File Name: EntityTypeValue.h
	> Author: caiyaodeng
	> Mail:caiyaodeng@gmail.com 
	> Created Time: Thu 28 Jan 2016 07:24:29 PM EST
 ************************************************************************/

#ifndef _ENTITY_TYPE_VALUE_H_
#define _ENTITY_TYPE_VALUE_H_

namespace NS_DataIndex {

    /**
    * 说明：自定义类型的值
    * 创建人：蔡矅镫
    * 更新时间：2016/1/29*/
    template <typename T>
    class EntityTypeValue {

    public:
        T m_tValue;
    };

}

#endif
