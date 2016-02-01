#include "../../include/Entity/EntityDataIndexDataDocument.h"

namespace NS_DataIndex {
    DataIndexDataDocument::DataIndexDataDocument ()
    :
        m_iInitBlockNum (0),
        m_iExtendedBlockNum (0),
        m_iDataTypeNum (0),
        m_pSingleDataIndexEntrySet (NULL),
        m_pHeadBlockSerialNum (NULL) {
            m_pSingleDataIndexEntrySet = new SingleDataIndexEntry ();
            m_pHeadBlockSerialNum = new BlockSerialNumEntryNode ();
    }

    DataIndexDataDocument::~DataIndexDataDocument () {
        if (m_pSingleDataIndexEntrySet != NULL) {
            delete m_pSingleDataIndexEntrySet;
            m_pSingleDataIndexEntrySet = NULL;
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
    void DataIndexDataDocument::recursiveReleaseMemory (BlockSerialNumEntryNode *objNode) {

    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool DataIndexDataDocument::setInitBlockNumber (uint32_t iInitBlockNum) {
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
    bool DataIndexDataDocument::setExtendedBlockNumber (uint32_t iExtendedBlockNum) {
        m_iExtendedBlockNum= iExtendedBlockNum;
        if (m_iExtendedBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据类型数量
     * 参数：数据类型数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool DataIndexDataDocument::setDataTypeNumber (uint32_t iDataTypeNum) {
        m_iDataTypeNum = iDataTypeNum;
        if (m_iDataTypeNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getInitBlockNumber () {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getExtendedBlockNumber () {
        return m_iExtendedBlockNum;
    }

    /**
      * 说明：获取数据类型数量
      * 返回值：数据类型数量
      * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getDataTypeNumber () {
        return m_iDataTypeNum;
    }

    /**
     * 说明：新增单数据引导对象
     * 参数：新的单数据引导对象
     * 返回值：是否增加成功
     * 更新时间：2016/2/1*/
    bool DataIndexDataDocument::addSingleDataIndexEntry (const SingleDataIndexEntryNode *pSingleDataIndexEntryNodeIn) {
        return true;
    }

    /*
     * 说明：删除单数据引导对象
     * 参数：数据类型标志位
     * 返回值：是否删除成功
     * 更新时间:2016/2/1*/
    bool DataIndexDataDocument::deleteSingleDataIndexEntr (const uint8_t *pFlagIn) {
        return true;
    }

    /**
     * 说明：查询单数据引导对象
     * 参数：数据类型标志位，标志位长度
     * 返回值：单数据引导对象
     * 更新时间：2016/2/1*/
    const
    DataIndexEntrySet *DataIndexDataDocument::quarySingleDataIndexEntry (const uint8_t *pFlagIn, uint32_t iFlagLengthIn) {
        return NULL;
    }

    /**
     * 说明：新增一个链表管理对象
     * 参数：新的链表管理对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool DataIndexDataDocument::addBlockSerialNumEntry (const BlockSerialNumEntryNode *objBlockSerialNumEntryNodeIn) {
        return true;
    }

    /*
     * 说明：删除链表管理对象
     * 参数：块编号
     * 返回值：是否删除成功
     * 更新时间:2016/2/1*/
    bool DataIndexDataDocument::deleteBlockSerialNumEntry (uint32_t iBlockSerialNumIn) {
        return true;
    }

    /**
     * 说明：查询一个链表管理对象
     * 参数：块编号
     * 返回值：一个链表管理对象
     * 更新时间：2016/1/30*/
    const
    BlockSerialNumEntry *DataIndexDataDocument::quaryBlockSerialNumEntry (uint32_t iBlockSerialNumIn) {
        return NULL;
    }
}
