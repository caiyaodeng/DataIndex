#ifndef ENTITY_ALL_TABLE_SET_H_
#define ENTITY_ALL_TABLE_SET_H_

#include "EntitySingleTablePropertyStructure.h"

namespace NS_DataIndex {

    /**
     * 说明：所有表集合
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class AllTableSet {

        uint32_t m_iTableTotalNumber;                                       //表总数
        SingleTablePropertyStructure *m_objSingleTablePropertyStructure;    //单表属性结构对象

    public:
        explicit
        AllTableSet();
        ~AllTableSet();

    public:
        /**
         * 说明：设置表总数
         * 参数：表总数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setTableTotalNumber(const uint32_t iTableTotalNumber);

        /**
         * 说明：获取表总数
         * 返回值：表总数
         * 更新时间：2016/1/28*/
        uint32_t getTableTotalNumber();
    };

}



#endif /* ENTITY_ALL_TABLE_SET_H_ */
