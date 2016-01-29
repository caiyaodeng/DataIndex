#ifndef _ENTITY_DATA_INDEX_DATA_DOCUMENT_H_
#define _ENTITY_DATA_INDEX_DATA_DOCUMENT_H_

#include "EntitySingleDataIndexEntry.h"

namespace NS_DataIndex {

    /**
     * 说明：数据索引数据文件
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class DataIndexDataDocument {

        uint32_t m_iInitBlockNum;                           //初始块数量
        uint32_t m_iNewExpandBlockNum;                      //新扩充块数
        uint32_t m_iDataTypeNum;                            //数据类型数量
        //TODO //B+树索引管理
        SingleDataIndexEntry *m_objSingleDataIndexEntry;    //单块对象

    public:
        DataIndexDataDocument ();
        ~DataIndexDataDocument ();

    public:

        /**
         * 说明：设置初始块数量
         * 参数：初始块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setInitBlockNumber (uint32_t iInitBlockNum);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setNewExpandBlockNumber (uint32_t iNewExpandBlockNum);

        /**
         * 说明：设置数据类型数量
         * 参数：数据类型数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setDataTypeNumber (uint32_t iDataTypeNum);

        /**
         * 说明：设置数据索引分区块编号
         * 参数：数据索引分区块编号
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setDataIndexPartitionBlockNumber (uint32_t iDataIndexPartitionBlockNum);

        /**
         * 说明：获取初始块数量
         * 返回值：初始块数量
         * 更新时间：2016/1/28*/
        uint32_t getInitBlockNumber ();

        /**
         * 说明：获取新扩充块数
         * 返回值：新扩充块数
         * 更新时间：2016/1/28*/
        uint32_t getNewExpandBlockNumber ();

        /**
          * 说明：设置数据类型数量
          * 返回值：数据类型数量
          * 更新时间：2016/1/28*/
        uint32_t getDataTypeNumber ();

        /**
         * 说明：设置数据索引分区块编号
         * 返回值：数据索引分区块编号
         * 更新时间：2016/1/28*/
        uint32_t getDataIndexPartitionBlockNumber ();
    };

}



#endif /* ENTITY_DATA_INDEX_DATA_DOCUMENT_H_ */
