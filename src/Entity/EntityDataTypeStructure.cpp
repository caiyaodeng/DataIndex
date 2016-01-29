#include "EntityDataTypeStructure.h"

namespace NS_DataIndex {

    DataTypeStructure::DataTypeStructure()
        :
            m_pDatabaseName(0),
            m_iInitBlockNum(0),
            m_iSingleExpandBlockNum(0),
            m_iNewExpandBlockNum(0),
            m_objDataTypeSet(NULL) {
                m_objDataTypeSet = new DataTypeSet();
                m_pDatabaseName = (uint8_t *)malloc(20);
                memset(m_pDatabaseName,0,20);
    }

    DataTypeStructure::~DataTypeStructure() {
        if (m_objDataTypeSet != NULL) {
            delete m_objDataTypeSet;
            m_objDataTypeSet = NULL;
        }
    }

    /**
     * 说明：设置数据库名称
     * 参数：数据库名称
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setDatabaseName(const uint8_t *pDatabaseName) {
        memcpy(m_pDatabaseName,pDatabaseName,strlen((char *)pDatabaseName));
        if (m_pDatabaseName == 0)
            return false;
        return true;
    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setInitBlockNumber(const uint32_t iInitBlockNum) {
        m_iInitBlockNum = iInitBlockNum;
        if (m_iInitBlockNum == 0){
            return false;
        }
        return true;
    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setSingleExpandBlockNumber(const uint32_t iSingleExpandBlockNum) {
        m_iSingleExpandBlockNum = iSingleExpandBlockNum;
        if (m_iSingleExpandBlockNum == 0){
            return false;
        }
        return true;
    }

    /**
     * 说明：设置新扩充块数
     * 参数：新扩充块数
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setNewExpandBlockNumber(const uint32_t iNewExpandBlockNum) {
        m_iNewExpandBlockNum = iNewExpandBlockNum;
        if (m_iNewExpandBlockNum == 0){
            return false;
        }
        return true;
    }

    /**
     * 说明：获取数据库名称
     * 返回值：数据库名称
     * 更新时间：2016/1/27*/
    const
    uint8_t *DataTypeStructure::getDatabaseName() {
        return m_pDatabaseName;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/27*/
    const
    uint32_t DataTypeStructure::getInitBlockNumber() {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取单次扩充块数量
     * 返回值：单次扩充块数量
     * 更新时间：2016/1/27*/
    const
    uint32_t DataTypeStructure::getSingleExpandBlockNumber() {
        return m_iSingleExpandBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/27*/
    const
    uint32_t DataTypeStructure::getNewExpandBlockNumber() {
        return m_iNewExpandBlockNum;
    }


}
