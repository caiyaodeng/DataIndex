#include "../../include/Entity/EntityTableSpace.h"

namespace NS_DataIndex {

    EntityTableSpace::EntityTableSpace ()
        :
        m_iInitBlockNum (0),
        m_iExtendedBlockNum (0),
        m_objTableSet (NULL),
        m_pHeadBlockSerialNum (NULL) {
            m_objTableSet = new TableSet ();
            m_pHeadBlockSerialNum = new BlockSerialNumEntryNode();
    }

    EntityTableSpace::~EntityTableSpace () {
        if (m_objTableSet != NULL) {
            delete m_objTableSet;
            m_objTableSet = NULL;
        }

        if (m_pHeadBlockSerialNum != NULL) {
            delete m_pHeadBlockSerialNum;
            m_pHeadBlockSerialNum = NULL;
        }
    }

    /**
     * 说明：递归释放本对象
     * 参数：链表管理对象节点
     * 更新时间：2016/1/30*/
    void EntityTableSpace::recursiveReleaseMemory (BlockSerialNumEntryNode *objNode) {

    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool EntityTableSpace::setInitBlockNumber (uint32_t iInitBlockNum) {
        m_iInitBlockNum = iInitBlockNum;
        if (m_iInitBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置新扩充块数
     * 参数：新扩充块数
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool EntityTableSpace::setExtendedBlockNumber (uint32_t iExtendedBlockNum) {
        m_iExtendedBlockNum = iExtendedBlockNum;
        if (m_iExtendedBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    uint32_t EntityTableSpace::getInitBlockNumber () {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    uint32_t EntityTableSpace::getExtendedBlockNumber () {
        return m_iExtendedBlockNum;
    }

    /**
     * 说明：添加一个类型
     * 参数：数据类型结构信息
     * 返回值：是否添加成功
     * 更新时间：2016/1/30*/
    bool EntityTableSpace::addDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：删除一个类型
     * 参数：数据类型名称
     * 返回值：是否删除成功
     * 更新时间：2016/1/30*/
    bool EntityTableSpace::deleteDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：查询一个类型
     * 参数：数据类型名称
     * 返回值：是否找到
     * 更新时间：2016/1/30*/
    bool EntityTableSpace::quaryDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：新增一个链表管理对象
     * 参数：新的链表管理对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool EntityTableSpace::addBlockSerialNumEntry (const BlockSerialNumEntryNode *objBlockSerialNumEntryNodeIn) {
            return true;
    }

    /**
     * 说明：删除一个链表管理对象
     * 参数：块编号
     * 返回值：是否删除成功
     * 更新时间：2016/1/30*/
    bool EntityTableSpace::deleteBlockSerialNumEntry (uint32_t iBlockSerialNumIn) {
        return true;
    }


    /**
     * 说明：查询一个链表管理对象
     * 参数：块编号
     * 返回值：一个链表管理对象
     * 更新时间：2016/1/30*/
    const
    BlockSerialNumEntry *EntityTableSpace::quaryBlockSerialNumEntry (uint32_t iBlockSerialNumIn) {
            return NULL;
    }

}

