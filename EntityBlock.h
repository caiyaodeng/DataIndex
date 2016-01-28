#ifndef ENTITYBLOCK_H_
#define ENTITYBLOCK_H_

namespace NS_DataIndex {

    class Block {

        uint32_t m_iInitBlockNumber;                //初始块数量
        uint32_t m_iNewExpandBlockNumber;           //新扩充块数
        uint32_t m_iDataPartitionBlockNumber;       //数据分区块编号
        uint32_t m_iIndexPartitionBlockNumber;      //索引分区块编号

    public:
        explicit
        Block();
        ~Block();

    public:
        /**
         * 说明：设置初始块数量
         * 参数：初始块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setInitBlockNumber(const uint32_t iInitBlockNumber);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setNewExpandBlockNumber(const uint32_t iNewExpandBlockNumber);
    };

}




#endif /* ENTITYBLOCK_H_ */
