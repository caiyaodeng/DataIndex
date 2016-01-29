#include "EntitySingleDataIndexEntry.h"

namespace NS_DataIndex {

    SingleDataIndexEntry::SingleDataIndexEntry ()
        :
        m_iInitBlockNum (0),
        m_iNewExpandBlockNum (0),
        m_iDataPartitionBlockserialNum (0),
        m_iIndexPartitionBlockserialNum (0) {

    }

    SingleDataIndexEntry::~SingleDataIndexEntry () {

    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleDataIndexEntry::setInitBlockNumber (const uint32_t iInitBlockNum) {
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
    bool SingleDataIndexEntry::setNewExpandBlockNumber (const uint32_t iNewExpandBlockNum) {
        m_iNewExpandBlockNum = iNewExpandBlockNum;
        if (m_iNewExpandBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置数据分区块编号
     * 参数：数据分区块编号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleDataIndexEntry::setDataPartitionBlockserialNumber (const uint32_t iDataPartitionBlockNum) {
        m_iDataPartitionBlockserialNum = iDataPartitionBlockNum;
        if (m_iDataPartitionBlockserialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置索引分区块编号
     * 参数：索引分区块编号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool SingleDataIndexEntry::setIndexPartitionBlockserialNumber (const uint32_t iIndexPartitionBlockNum) {
        m_iIndexPartitionBlockserialNum = iIndexPartitionBlockNum;
        if (m_iIndexPartitionBlockserialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    const
    uint32_t SingleDataIndexEntry::getInitBlockNumber () {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    const
    uint32_t SingleDataIndexEntry::getNewExpandBlockNumber () {
        return m_iNewExpandBlockNum;
    }

    /**
     * 说明：获取数据分区块编号
     * 返回值：数据分区块编号
     * 更新时间：2016/1/28*/
    const
    uint32_t SingleDataIndexEntry::getDataPartitionBlockserialNumber () {
        return m_iDataPartitionBlockserialNum;
    }

    /**
     * 说明：获取索引分区块编号
     * 返回值：索引分区块编号
     * 更新时间：2016/1/28*/
    const
    uint32_t SingleDataIndexEntry::getIndexPartitionBlockserialNumber () {
        return m_iIndexPartitionBlockserialNum;
    }
}





