#ifndef _ENTITY_TABLE_SET_H_
#define _ENTITY_TABLE_SET_H_

#include "EntitySingleTablePropertyStructure.h"

namespace NS_DataIndex {

    /**
     * 说明：所有表集合
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class TableSet {

        uint32_t m_iTableTotalNum;                                       //表总数
        SingleTablePropertyStructure *m_objSingleTablePropertyStructure;    //单表属性结构对象

    public:
        explicit
        TableSet();
        ~TableSet();

    public:
        /**
         * 说明：设置表总数
         * 参数：表总数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setTableTotalNumber(const uint32_t iTableTotalNum);

        /**
         * 说明：获取表总数
         * 返回值：表总数
         * 更新时间：2016/1/28*/
        const
        uint32_t getTableTotalNumber();
    };

}


#endif /* ENTITY_TABLE_SET_H_ */
