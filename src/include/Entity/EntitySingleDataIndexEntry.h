#ifndef _ENTITY_SINGLE_DATA_INDEX_ENTRY_H_
#define _ENTITY_SINGLE_DATA_INDEX_ENTRY_H_

#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/Entity/EntitySingleDataIndexEntrySet.h"
namespace NS_DataIndex {

    /**
     * 单数据索引项
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class SingleDataIndexEntry {

        uint32_t m_iInitBlockNum;                           //初始块数量
        uint32_t m_iNewExpandBlockNum;                      //新扩充块数
        SingleDataIndexEntryNode *m_pSingleDataIndexEntry;  //索引分区项对象

        /**
         * 说明：递归释放本对象
         * 参数：索引分区对象节点
         * 更新时间：2016/1/30*/
        void recursiveReleaseMemory (SingleDataIndexEntryNode *pNode);

    public:
        explicit
        SingleDataIndexEntry ();
        ~SingleDataIndexEntry ();

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
         * 说明：新增一个索引分区对象
         * 参数：新增的索引分区对象
         * 返回值：是否增加成功
         * 更新时间：2016/1/30*/
        bool addSingleDataIndexEntry (const SingleDataIndexEntryNode *pSingleDataIndexEntryNodeIn);

        /**
         * 说明：查询索引分区对象
         * 参数：数据类型标志位，标志位长度
         * 返回值：索引分区对象
         * 更新时间：2016/1/30*/
        const
        SingleDataIndexEntry *quarySingleDataIndexEntry (const uint8_t *pFlagIn, uint32_t iFlagLengthIn);
    };

}

#ifdef __cplusplus
}
#endif

#endif /* ENTITY_SINGLE_DATA_INDEX_ENTRY_H_ */
