#ifndef _ENTITY_DATA_INDEX_DATA_DOCUMENT_H_
#define _ENTITY_DATA_INDEX_DATA_DOCUMENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "EntitySingleDataIndexEntry.h"
#include "../Extend/DirectIndex/EntityIndexManagement.h"

namespace NS_DataIndex {

    /**
     * 说明：数据索引数据文件
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class DataIndexDataDocument {

        uint32_t m_iInitBlockNum;                           //初始块数量
        uint32_t m_iExtendedBlockNum;                       //新扩充块数
        uint32_t m_iDataTypeNum;                            //数据类型数量
        SingleDataIndexEntry *m_pSingleDataIndexEntrySet;   //单数据引导对象
        BlockSerialNumEntryNode  *m_pHeadBlockSerialNum;    //链表管理对象

        /**
         * 说明：递归释放本对象
         * 参数：链表管理对象节点
         * 更新时间：2016/1/30*/
        void recursiveReleaseMemory (BlockSerialNumEntryNode *pNode);

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
        bool setExtendedBlockNumber (uint32_t iExtendedBlockNum);

        /**
         * 说明：设置数据类型数量
         * 参数：数据类型数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setDataTypeNumber (uint32_t iDataTypeNum);

        /**
         * 说明：获取初始块数量
         * 返回值：初始块数量
         * 更新时间：2016/1/28*/
        uint32_t getInitBlockNumber ();

        /**
         * 说明：获取新扩充块数
         * 返回值：新扩充块数
         * 更新时间：2016/1/28*/
        uint32_t getExtendedBlockNumber ();

        /**
          * 说明:获取数据类型数量
          * 返回值：数据类型数量
          * 更新时间：2016/1/28*/
        uint32_t getDataTypeNumber ();

        /**
         * 说明：新增单数据引导对象
         * 参数：新的单数据引导对象
         * 返回值：是否增加成功
         * 更新时间：2016/2/1*/
        bool addSingleDataIndexEntry (const SingleDataIndexEntryNode *pSingleDataIndexEntryNodeIn);

        /*
         * 说明：删除单数据引导对象
         * 参数：数据类型标志位
         * 返回值：是否删除成功
         * 更新时间:2016/2/1*/
        bool deleteSingleDataIndexEntr (const uint8_t *pFlagIn);

        /**
         * 说明：查询单数据引导对象
         * 参数：数据类型标志位，标志位长度
         * 返回值：单数据引导对象
         * 更新时间：2016/2/1*/
        const
        DataIndexEntrySet *quarySingleDataIndexEntry (const uint8_t *pFlagIn, uint32_t iFlagLengthIn);

        /**
         * 说明：新增一个链表管理对象
         * 参数：新的链表管理对象
         * 返回值：是否增加成功
         * 更新时间：2016/1/30*/
        bool addBlockSerialNumEntry (const BlockSerialNumEntryNode *pBlockSerialNumEntryNodeIn);

        /*
         * 说明：删除链表管理对象
         * 参数：块编号
         * 返回值：是否删除成功
         * 更新时间:2016/2/1*/
        bool deleteBlockSerialNumEntry (uint32_t iBlockSerialNumIn);

        /**
         * 说明：查询一个链表管理对象
         * 参数：块编号
         * 返回值：一个链表管理对象
         * 更新时间：2016/1/30*/
        const
        BlockSerialNumEntry *quaryBlockSerialNumEntry (uint32_t iBlockSerialNumIn);
    };

}

#ifdef __cplusplus
}
#endif

#endif /* ENTITY_DATA_INDEX_DATA_DOCUMENT_H_ */
