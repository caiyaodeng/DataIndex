#ifndef _INCLUDE_EXTEND_B_TREE_ENTITY_INDEX_MANAGEMENT_H_
#define _INCLUDE_EXTEND_B_TREE_ENTITY_INDEX_MANAGEMENT_H_

#ifdef __cplusplus
extern "C" {
#endif


#include <stdlib.h>
#include <stdint.h>

namespace NS_DataIndex {

    class BlockSerialNumEntry;

    /**
     * 说明：B+树暂时以链表形式
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class BlockSerialNumEntryNode {

    public:
        BlockSerialNumEntry *m_pBlockSerialNum;
        BlockSerialNumEntryNode *m_pNext;

        explicit
        BlockSerialNumEntryNode ();
        ~BlockSerialNumEntryNode ();
    };


    /**
     * 说明：B+树暂时以链表形式
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class BlockSerialNumEntry {

        uint32_t m_iBlockSerialNum;

    public:
        explicit
        BlockSerialNumEntry ();
        ~BlockSerialNumEntry ();

    public:
        /**
         * 说明：设置块号
         * 参数：块号
         * 返回值：是否设置成功
         * 更新时间：2016/1/30*/
        bool setBlockSerialNumber (uint32_t iBlockSerialNum);

        /**
         * 说明：获取块号
         * 返回值：块号
         * 更新时间：2016/1/30*/
        uint32_t getBlockSerialNumber ();
    };
}

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_EXTEND_B_TREE_ENTITYINDEXMANAGEMENT_H_ */
