#ifndef _MODEL_TABLE_SPACE_MANAGEMENT_H_
#define _MODEL_TABLE_SPACE_MANAGEMENT_H_

#include "../Entity/EntityTableSet.h"
#include "../Extend/DirectIndex/EntityIndexManagement.h"
namespace NS_DataIndex {

    /**
     * 说明：表空间管理
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class ModelTableSpace {

        TableSet *m_objTableSet;                            //表集合数组
        uint32_t m_iExpandBlockNum;                         //当前扩充块数
        BlockSerialNumEntryNode  *m_pHeadBlockSerialNum;    //链表管理对象

        /**
         * 说明：递归释放本对象
         * 参数：链表管理对象节点
         * 更新时间：2016/1/30*/
        void recursiveReleaseMemory (BlockSerialNumEntryNode *pNode);

    public:
        explicit
        ModelTableSpace ();
        ~ModelTableSpace ();

    public:

        /**
         * 说明：创建表
         * 参数：表属性结构
         * 返回值：是否创建成功
         * 更新时间：2016/1/29*/
        bool addTableEntry (const SingleTablePropertyStructure *pTablePropertyStructureIn);

        /**
         * 说明：删除表
         * 参数：块编号
         * 返回值：是否删除成功
         * 更新时间：2016/1/29*/
        bool deleteTableEntry (uint32_t iTableSerialNumIn);

        /**
         * 说明：查询表
         * 参数：块编号
         * 返回值：是否找到
         * 更新时间：2016/1/29*/
        bool quaryTableEntry (uint32_t iTableSerialNumIn);

        /**
         * 说明：扩充一次表
         * 返回值：是否扩充成功
         * 更新时间：2016/1/29*/
        bool expandTableSpace ();

        /**
         * 说明：新增一个链表管理对象
         * 参数：新的链表管理对象
         * 返回值：是否增加成功
         * 更新时间：2016/1/30*/
        bool addBlockSerialNumEntry (const BlockSerialNumEntryNode *objBlockSerialNumEntryNodeIn);

        /**
         * 说明：删除一个链表管理对象
         * 参数：块编号
         * 返回值：是否删除成功
         * 更新时间：2016/1/30*/
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




#endif /* MODELTABLESPACEMANAGEMENT_H_ */
