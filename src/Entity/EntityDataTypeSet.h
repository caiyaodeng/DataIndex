#ifndef _ENTITY_DATA_TYPE_SET_H_
#define _ENTITY_DATA_TYPE_SET_H_

#include "EntitySingleDataTypeInformation.h"

namespace NS_DataIndex {

    /**
     * 说明：所有数据类型集合
     * 创作人:林宇斌
     * 更新时间：2016/1/28*/
    class DataTypeSet {

        uint32_t m_iDataTypeNum;                         //数据类型数量
        SingleDataTypeInformation *m_objSingleDataTypeInformation;      //单数据类型结构信息对象

    public:
        explicit
        DataTypeSet();
        ~DataTypeSet();

    public:
        /**
         * 说明：设置数据类型数量
         * 参数：数据类型数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setDataTypeNumber(const uint32_t iDataTypeNum);

        /*
         * 说明：获取数据类型长度
         * 返回值数据类型长度
         * 更新时间：2016/1/28*/
        const
        uint32_t getDataTypeNumber();
    };

}



#endif /* ENTITYDATATYPESET_H_ */
