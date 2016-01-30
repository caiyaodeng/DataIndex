#include "../../include/DataType/ModelDataTypeManagement.h"

namespace NS_DataIndex {

    DataTypeManagement::DataTypeManagement ()
        :
                m_iExpandBlockNum (0),
                m_iDataTypeNum (0),
                m_pHeadBlockSerialNumEntry (NULL),
                m_pHeadSingleDataIndexEntry (NULL) {
                    m_pHeadBlockSerialNumEntry = new BlockSerialNumEntryNode ();
                    m_pHeadSingleDataIndexEntry = new SingleDataIndexEntryNode ();
    }

    DataTypeManagement::~DataTypeManagement () {
        if (m_pHeadBlockSerialNumEntry != NULL) {
            delete m_pHeadBlockSerialNumEntry;
            m_pHeadBlockSerialNumEntry = NULL;
        }

        if (m_pHeadSingleDataIndexEntry != NULL) {
            delete m_pHeadSingleDataIndexEntry;
            m_pHeadSingleDataIndexEntry =NULL;
        }
    }

    /**
     * 说明：递归释放本对象
     * 参数：索引分区对象节点
     * 更新时间：2016/1/30*/
    void DataTypeManagement::recursiveReleaseBlockSerialNumMemory (BlockSerialNumEntryNode *pNode) {

    }

    /**
     * 说明：递归释放本对象
     * 参数：索引分区对象节点
     * 更新时间：2016/1/30*/
    void DataTypeManagement::recursiveReleaseSingleDataIndexMemory (SingleDataIndexEntryNode *pNode) {

    }

    /**
     * 说明：设置当前扩充块数
     * 参数：当前扩充块数
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool DataTypeManagement::setExpandBlockNumber (uint32_t iExpandBlockNum) {
        m_iExpandBlockNum = iExpandBlockNum;
        if (m_iExpandBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据类型数量
     * 参数：数据类型数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool DataTypeManagement::setDataTypeNumber (uint32_t iDataTypeNum) {
        m_iDataTypeNum = iDataTypeNum;
        if (m_iDataTypeNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取当前扩充块数
     * 返回值：当前扩充块数
     * 更新时间：2016/1/30*/
    uint32_t DataTypeManagement::getExpandBlockNumber () {
        return m_iExpandBlockNum;
    }

    /**
     * 说明：获取数据类型数量
     * 返回值：数据类型数量
     * 更新时间：2016/1/30*/
    uint32_t DataTypeManagement::getsetDataTypeNumber () {
        return m_iDataTypeNum;
    }

    /**
     * 说明：新增一个B+树对象
     * 参数：新增一个B+树对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool DataTypeManagement::addBlockSerialNumEntry (const SingleDataIndexEntryNode *pBlockSerialNumEntryNodeIn) {
        return true;
    }

    /**
     * 说明：查询B+树对象
     * 参数：块编号
     * 返回值：B+树对象
     * 更新时间：2016/1/30*/
    const
    BlockSerialNumEntry *DataTypeManagement::quaryBlockSerialNumEntry (const uint32_t iBlockSerialNumIn) {
        return NULL;
    }

    /**
     * 说明：新增一个索引分区对象
     * 参数：新增的索引分区对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool DataTypeManagement::addSingleDataIndexEntry (const SingleDataIndexEntryNode *pSingleDataIndexEntryNodeIn) {
        return true;
    }

    /**
     * 说明：查询索引分区对象
     * 参数：数据类型标志位，标志位长度
     * 返回值：索引分区对象
     * 更新时间：2016/1/30*/
    const
    DataIndexEntry *DataTypeManagement::quarySingleDataIndexEntry (const uint8_t *pFlagIn, const uint32_t iFlagLengthIn) {
        return NULL;
    }
}

