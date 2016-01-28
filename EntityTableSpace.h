#ifndef ENTITY_TABLE_SPACE_H_
#define ENTITY_TABLE_SPACE_H_

namespace NS_DataIndex {

    /**
     * 说明：表空间*/
    class TableSpace{
        uint32_t m_iInitBlockNumber;            //初始块数量
        uint32_t m_iNewExpandBlockNumber;       //新扩充块数
        uint32_t m_iPartitionBlockNumber;       //表空间分区块编号

    };
}



#endif /* ENTITY_TABLE_SPACE_H_ */
