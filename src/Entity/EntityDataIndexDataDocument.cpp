#include "../../include/Entity/EntityDataIndexDataDocument.h"

namespace NS_DataIndex {
    DataIndexDataDocument::DataIndexDataDocument ()
    :
        m_iInitBlockNum (0),
        m_iNewExpandBlockNum (0),
        m_iDataTypeNum (0),
        m_objSingleDataIndexEntry (NULL),
        m_pHeadBlockSerialNum (NULL) {
            m_objSingleDataIndexEntry = new SingleDataIndexEntry ();
            m_pHeadBlockSerialNum = new BlockSerialNumEntryNode ();
    }

    DataIndexDataDocument::~DataIndexDataDocument () {

    }

    /**
     * 说明：递归释放本对象
     * 参数：B+树管理对象节点
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
    bool DataIndexDataDocument::setNewExpandBlockNumber (uint32_t iNewExpandBlockNum) {
        m_iNewExpandBlockNum = iNewExpandBlockNum;
        if (m_iNewExpandBlockNum == 0) {
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
     * 说明：设置数据索引分区块编号
     * 参数：数据索引分区块编号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool DataIndexDataDocument::setDataIndexPartitionBlockNumber (uint32_t iDataIndexPartitionBlockNum) {
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
    uint32_t DataIndexDataDocument::getNewExpandBlockNumber () {
        return m_iNewExpandBlockNum;
    }

    /**
      * 说明：设置数据类型数量
      * 返回值：数据类型数量
      * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getDataTypeNumber () {
        return m_iDataTypeNum;
    }

    /**
     * 说明：新增一个B+树管理对象
     * 参数：新的B+树管理对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool DataIndexDataDocument::addBlockSerialNumEntry (const BlockSerialNumEntryNode *objBlockSerialNumEntryNodeIn) {
        return true;
    }

    /**
     * 说明：查询一个B+树管理对象
     * 参数：块编号
     * 返回值：一个B+树管理对象
     * 更新时间：2016/1/30*/
    const
    BlockSerialNumEntry *DataIndexDataDocument::DataIndexDataDocument::quaryBlockSerialNumEntry (uint32_t iBlockSerialNumIn) {
        return NULL;
    }
}
