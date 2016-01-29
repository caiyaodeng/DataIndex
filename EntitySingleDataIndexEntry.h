#ifndef ENTITY_SINGLE_DATA_INDEX_ENTRY_H_
#define ENTITY_SINGLE_DATA_INDEX_ENTRY_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

namespace NS_DataIndex {

    class SingleDataIndexEntry {

        uint32_t m_iInitBlockNum;                   //初始块数量
        uint32_t m_iNewExpandBlockNum;              //新扩充块数
        uint32_t m_iDataPartitionBlockserialNum;    //数据分区块编号
        uint32_t m_iIndexPartitionBlockserialNum;   //索引分区块编号

    public:
        explicit
        SingleDataIndexEntry();
        ~SingleDataIndexEntry();

    public:
        /**
         * 说明：设置初始块数量
         * 参数：初始块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setInitBlockNumber(const uint32_t iInitBlockNum);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setNewExpandBlockNumber(const uint32_t iNewExpandBlockNum);

        /**
         * 说明：设置数据分区块编号
         * 参数：数据分区块编号
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setDataPartitionBlockserialNumber(const uint32_t iDataPartitionBlockserialNum);

        /**
         * 说明：设置索引分区块编号
         * 参数：索引分区块编号
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setIndexPartitionBlockserialNumber(const uint32_t iIndexPartitionBlockserialNum);

        /**
         * 说明：获取初始块数量
         * 返回值：初始块数量
         * 更新时间：2016/1/28*/
        const
        uint32_t getInitBlockNumber();

        /**
         * 说明：获取新扩充块数
         * 返回值：新扩充块数
         * 更新时间：2016/1/28*/
        const
        uint32_t getNewExpandBlockNumber();

        /**
         * 说明：获取数据分区块编号
         * 返回值：数据分区块编号
         * 更新时间：2016/1/28*/
        const
        uint32_t getDataPartitionBlockserialNumber();

        /**
         * 说明：获取索引分区块编号
         * 返回值：索引分区块编号
         * 更新时间：2016/1/28*/
        const
        uint32_t getIndexPartitionBlockserialNumber();
    };

}



#endif /* ENTITY_SINGLE_DATA_INDEX_ENTRY_H_ */
