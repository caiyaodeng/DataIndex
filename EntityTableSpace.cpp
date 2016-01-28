#include "EntityTableSpace.h"

namespace NS_DataIndex {

    TableSpace::TableSpace()
        :
        m_iInitBlockNumber(0),
        m_iNewExpandBlockNumber(0),
        m_iPartitionBlockNumber(0),
        m_objAllTableSet(NULL) {
            m_objAllTableSet = new AllTableSet();
    }

    TableSpace::~TableSpace() {
        if (m_objAllTableSet != NULL)
            delete m_objAllTableSet;
            m_objAllTableSet = NULL;
    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSpace::setInitBlockNumber(const uint32_t iInitBlockNumber) {
        m_iInitBlockNumber = iInitBlockNumber;
        if (m_iInitBlockNumber == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置新扩充块数
     * 参数：新扩充块数
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSpace::setNewExpandBlockNumber(const uint32_t iNewExpandBlockNumber) {
        m_iNewExpandBlockNumber = iNewExpandBlockNumber;
        if (m_iNewExpandBlockNumber == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置表空间分区块编号
     * 参数：表空间分区块编号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSpace::setPartitionBlockNumber(const uint32_t iPartitionBlockNumber) {
        m_iPartitionBlockNumber = iPartitionBlockNumber;
        if (m_iPartitionBlockNumber == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSpace::getInitBlockNumber() {
        return m_iInitBlockNumber;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSpace::getNewExpandBlockNumber() {
        return m_iNewExpandBlockNumber;
    }

    /**
     * 说明：获取表空间分区块编号
     * 返回值：表空间分区块编号
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSpace::getPartitionBlockNumber() {
        return m_iPartitionBlockNumber;
    }
}

