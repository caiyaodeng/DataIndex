#include "EntityTableSpace.h"

namespace NS_DataIndex {

    TableSpace::TableSpace ()
        :
        m_iInitBlockNum (0),
        m_iNewExpandBlockNum (0),
        m_objTableSet (NULL) {
            m_objTableSet = new TableSet ();
    }

    TableSpace::~TableSpace () {
        if (m_objTableSet != NULL) {
            delete m_objTableSet;
            m_objTableSet = NULL;
        }
    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSpace::setInitBlockNumber (const uint32_t iInitBlockNum) {
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
    bool TableSpace::setNewExpandBlockNumber (const uint32_t iNewExpandBlockNum) {
        m_iNewExpandBlockNum = iNewExpandBlockNum;
        if (m_iNewExpandBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置表空间分区块编号
     * 参数：表空间分区块编号
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool TableSpace::setPartitionBlockNumber (const uint32_t iPartitionBlockNum) {
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSpace::getInitBlockNumber () {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSpace::getNewExpandBlockNumber () {
        return m_iNewExpandBlockNum;
    }

    /**
     * 说明：获取表空间分区块编号
     * 返回值：表空间分区块编号
     * 更新时间：2016/1/28*/
    const
    uint32_t TableSpace::getPartitionBlockNumber () {
        return 0;
    }
}

