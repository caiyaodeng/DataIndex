#ifndef ENTITY_DATA_INDEX_DATA_DOCUMENT_H_
#define ENTITY_DATA_INDEX_DATA_DOCUMENT_H_

#include "EntityBlock.h"

namespace NS_DataIndex {

    /**
     * 说明：数据索引数据文件
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class DataIndexDataDocument {

        uint32_t m_iInitBlockNumber;                //初始块数量
        uint32_t m_iNewExpandBlockNumber;           //新扩充块数
        uint32_t m_iDataTypeNumber;                 //数据类型数量
        uint32_t m_iDataIndexPartitionBlockNumber;  //数据索引分区块编号
        Block *m_objBlock;                          //单块对象

    public:
        DataIndexDataDocument();
        ~DataIndexDataDocument();

    public:
    };

}



#endif /* ENTITY_DATA_INDEX_DATA_DOCUMENT_H_ */
