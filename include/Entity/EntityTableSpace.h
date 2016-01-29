#ifndef _ENTITY_TABLE_SPACE_H_
#define _ENTITY_TABLE_SPACE_H_

#include "EntityTableSet.h"

namespace NS_DataIndex {

    /**
     * 说明：表空间
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class TableSpace {

        uint32_t m_iInitBlockNum;           //初始块数量
        uint32_t m_iNewExpandBlockNum;      //新扩充块数
        //TODO://B+树索引管理
        TableSet *m_objTableSet;            //所有表集合

    public:
        explicit
        TableSpace ();
        ~TableSpace ();

    public:
        /**
         * 说明：设置初始块数量
         * 参数：初始块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setInitBlockNumber (const uint32_t iInitBlockNum);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setNewExpandBlockNumber (const uint32_t iNewExpandBlockNum);

        /**
         * 说明：设置表空间分区块编号
         * 参数：表空间分区块编号
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setPartitionBlockNumber (const uint32_t iPartitionBlockNum);

        /**
         * 说明：获取初始块数量
         * 返回值：初始块数量
         * 更新时间：2016/1/28*/
        const
        uint32_t getInitBlockNumber ();

        /**
         * 说明：获取新扩充块数
         * 返回值：新扩充块数
         * 更新时间：2016/1/28*/
        const
        uint32_t getNewExpandBlockNumber ();

        /**
         * 说明：获取表空间分区块编号
         * 返回值：表空间分区块编号
         * 更新时间：2016/1/28*/
        const
        uint32_t getPartitionBlockNumber ();
    };
}



#endif /* ENTITY_TABLE_SPACE_H_ */
