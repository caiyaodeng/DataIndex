#include "../../include/Entity/EntityTableSpace.h"

namespace NS_DataIndex {

    TableSpace::TableSpace ()
        :
        m_iInitBlockNum (0),
        m_iNewExpandBlockNum (0),
        m_objTableSet (NULL),
        m_pHeadBlockSerialNum (NULL) {
            m_objTableSet = new TableSet ();
            m_pHeadBlockSerialNum = new BlockSerialNumEntryNode();
    }

    TableSpace::~TableSpace () {
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
     * 参数：B+树管理对象节点
     * 更新时间：2016/1/30*/
    void TableSpace::recursiveReleaseMemory (BlockSerialNumEntryNode *objNode) {

    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSpace::setInitBlockNumber (uint32_t iInitBlockNum) {
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
    bool TableSpace::setNewExpandBlockNumber (uint32_t iNewExpandBlockNum) {
        m_iNewExpandBlockNum = iNewExpandBlockNum;
        if (m_iNewExpandBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    uint32_t TableSpace::getInitBlockNumber () {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    uint32_t TableSpace::getNewExpandBlockNumber () {
        return m_iNewExpandBlockNum;
    }

    /**
     * 说明：新增一个B+树管理对象
     * 参数：新的B+树管理对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool TableSpace::addBlockSerialNumEntry (const BlockSerialNumEntryNode *objBlockSerialNumEntryNodeIn) {
            return true;
    }

    /**
     * 说明：查询一个B+树管理对象
     * 参数：块编号
     * 返回值：一个B+树管理对象
     * 更新时间：2016/1/30*/
    const
    BlockSerialNumEntry *TableSpace::quaryBlockSerialNumEntry (uint32_t iBlockSerialNumIn) {
            return NULL;
    }

}

