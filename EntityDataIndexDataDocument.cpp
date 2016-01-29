#include "EntityDataIndexDataDocument.h"

namespace NS_DataIndex {
    DataIndexDataDocument::DataIndexDataDocument()
    :
        m_iInitBlockNum(0),
        m_iNewExpandBlockNum(0),
        m_iDataTypeNum(0),
        m_iDataIndexPartitionBlockNum(0),
        m_objSingleDataIndexEntry(NULL){
            m_objSingleDataIndexEntry = new SingleDataIndexEntry();
    }

    DataIndexDataDocument::~DataIndexDataDocument() {

    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/28*/
    bool DataIndexDataDocument::setInitBlockNumber(uint32_t iInitBlockNum) {
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
    bool DataIndexDataDocument::setNewExpandBlockNumber(uint32_t iNewExpandBlockNum) {
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
    bool DataIndexDataDocument::setDataTypeNumber(uint32_t iDataTypeNum) {
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
    bool DataIndexDataDocument::setDataIndexPartitionBlockNumber(uint32_t iDataIndexPartitionBlockNum) {
        m_iDataIndexPartitionBlockNum = iDataIndexPartitionBlockNum;
        if (m_iDataIndexPartitionBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getInitBlockNumber() {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getNewExpandBlockNumber() {
        return m_iNewExpandBlockNum;
    }

    /**
      * 说明：设置数据类型数量
      * 返回值：数据类型数量
      * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getDataTypeNumber() {
        return m_iDataTypeNum;
    }

    /**
     * 说明：设置数据索引分区块编号
     * 返回值：数据索引分区块编号
     * 更新时间：2016/1/28*/
    uint32_t DataIndexDataDocument::getDataIndexPartitionBlockNumber() {
        return m_iDataIndexPartitionBlockNum;
    }

}
