#include "EntityDataTypeStructure.h"

namespace NS_DataIndex {

    DataTypeStructure::DataTypeStructure()
        :
            m_iDatabaseName(0),
            m_iInitBlockNumber(0),
            m_iSingleExpandBlockNumber(0),
            m_iNewExpandBlockNumber(0),
            m_objAllDataTypeSet(NULL) {
                m_objAllDataTypeSet = new AllDataTypeSet();
                m_iDatabaseName = (uint8_t *)malloc(20);
                memset(m_iDatabaseName,0,20);
    }

    DataTypeStructure::~DataTypeStructure() {
        if (m_objAllDataTypeSet != NULL) {
            delete m_objAllDataTypeSet;
            m_objAllDataTypeSet = NULL;
        }
    }

    /**
     * 说明：设置数据库名称
     * 参数：数据库名称
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setDatabaseName(const uint8_t *iDatabaseName) {
        memcpy(m_iDatabaseName,iDatabaseName,strlen((char *)iDatabaseName));
        if (m_iDatabaseName == 0)
            return false;
        return true;
    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setInitBlockNumber(const uint32_t iInitBlockNumber) {
        m_iInitBlockNumber = iInitBlockNumber;
        if (m_iInitBlockNumber == 0){
            return false;
        }
        return true;
    }

    /**
     * 说明：设置初始块数量
     * 参数：初始块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setSingleExpandBlockNumber(const uint32_t iSingleExpandBlockNumber) {
        m_iSingleExpandBlockNumber = iSingleExpandBlockNumber;
        if (m_iSingleExpandBlockNumber == 0){
            return false;
        }
        return true;
    }

    /**
     * 说明：设置新扩充块数
     * 参数：新扩充块数
     * 返回值：是否设置成功
     * 更新时间：2016/1/27*/
    bool DataTypeStructure::setNewExpandBlockNumber(const uint32_t iNewExpandBlockNumber) {
        m_iNewExpandBlockNumber = iNewExpandBlockNumber;
        if (m_iNewExpandBlockNumber == 0){
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
        return m_iDatabaseName;
    }

    /**
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/27*/
    const
    uint32_t DataTypeStructure::getInitBlockNumber() {
        return m_iInitBlockNumber;
    }

    /**
     * 说明：获取单次扩充块数量
     * 返回值：单次扩充块数量
     * 更新时间：2016/1/27*/
    const
    uint32_t DataTypeStructure::getSingleExpandBlockNumber() {
        return m_iSingleExpandBlockNumber;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/27*/
    const
    uint32_t DataTypeStructure::getNewExpandBlockNumber() {
        return m_iNewExpandBlockNumber;
    }


}
