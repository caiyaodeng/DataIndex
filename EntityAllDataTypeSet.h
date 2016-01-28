#ifndef ENTITY_ALL_DATA_TYPE_SET_H_
#define ENTITY_ALL_DATA_TYPE_SET_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "EntityDataTypeInformation.h"

namespace NS_DataIndex {

    /**
     * 说明：所有数据类型集合
     * 创作人:林宇斌
     * 更新时间：2016/1/28*/
    class AllDataTypeSet {
        uint32_t m_iDataTypeNumber;                         //数据类型数量
        DataTypeInformation *m_objDataTypeInformation;      //单数据类型结构信息对象

    public:
        AllDataTypeSet();
        ~AllDataTypeSet();
    public:

        /**
         * 说明：设置数据类型数量
         * 参数：数据类型数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setDataTypeNumber(const uint32_t iDataTypeNumber);

        /*
         * 说明：获取数据类型长度
         * 返回值数据类型长度
         * 更新时间：2016/1/28*/
        const
        uint32_t getDataTypeNumber();
    };

}



#endif /* ENTITY_ALL_DATA_TYPE_SET_H_ */
