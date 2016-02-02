#ifndef _ENTITY_TABLE_SPACE_H_
#define _ENTITY_TABLE_SPACE_H_

#include "EntityTableSet.h"
#include "../Extend/DirectIndex/EntityIndexManagement.h"

namespace NS_DataIndex {

    /**
     * 说明：表空间
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class TableSpace {

        uint32_t m_iInitBlockNum;                           //初始块数量
        uint32_t m_iExtendedBlockNum;                       //新扩充块数
        TableSet *m_objTableSet;                            //所有表集合
        BlockSerialNumEntryNode  *m_pHeadBlockSerialNum;    //链表管理对象

        /**
         * 说明：递归释放本对象
         * 参数：链表管理对象节点
         * 更新时间：2016/1/30*/
        void recursiveReleaseMemory (BlockSerialNumEntryNode *pNode);

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
        bool setInitBlockNumber (uint32_t iInitBlockNum);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setExtendedBlockNumber (uint32_t iExtendedBlockNum);

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
         * 说明：添加一个类型
         * 参数：数据类型结构信息
         * 返回值：是否添加成功
         * 更新时间：2016/2/1*/
        bool addDataType (const uint8_t *pDataTypeNameIn);

        /**
         * 说明：删除一个类型
         * 参数：数据类型名称
         * 返回值：是否删除成功
         * 更新时间：2016/2/1*/
        bool deleteDataType (const uint8_t *pDataTypeNameIn);

        /**
         * 说明：查询一个类型
         * 参数：数据类型名称
         * 返回值：是否找到
         * 更新时间：2016/2/1*/
        bool quaryDataType (const uint8_t *pDataTypeNameIn);

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

#endif /* ENTITY_TABLE_SPACE_H_ */
