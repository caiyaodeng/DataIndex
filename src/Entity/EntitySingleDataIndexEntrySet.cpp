
#include "../../include/Entity/EntitySingleDataIndexEntrySet.h"

namespace NS_DataIndex {

    SingleDataIndexEntryNode::SingleDataIndexEntryNode ()
        :
                m_pDataIndexEntry (NULL),
                m_pNext (NULL) {
                    m_pDataIndexEntry = new DataIndexEntry ();
    }

    SingleDataIndexEntryNode::~SingleDataIndexEntryNode () {
        if (m_pDataIndexEntry != NULL) {
           delete m_pDataIndexEntry;
           m_pDataIndexEntry = NULL;
        }
    }

    DataIndexEntry::DataIndexEntry ()
        :
                m_pFlag (0),
                m_iStartBlockSerialNum (0),
                m_iBlockNum (0),
                m_lOffset (0) {
                    m_pFlag = (uint8_t *) malloc (10);
                    memset (m_pFlag, 0 , 10);
    }
    DataIndexEntry::~DataIndexEntry () {

    }
    /**
     * 说明：设置数据类型标志位
     * 参数：数据类型标志位
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool DataIndexEntry::setFlag (const uint8_t *pFlag) {
        memcpy (m_pFlag, pFlag, strlen ((char *)pFlag));
        if (m_pFlag == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置起始块号
     * 参数：起始块号
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool DataIndexEntry::setStartBlockSerialNumber (uint32_t iStartBlockSerialNum) {
        m_iStartBlockSerialNum = iStartBlockSerialNum;
        if (m_iStartBlockSerialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置块数量
     * 参数：块数量
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool DataIndexEntry::setBlockNumber (uint32_t iBlockNum) {
        m_iBlockNum = iBlockNum;
        if (m_iBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：设置偏移量
     * 参数：偏移量
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool DataIndexEntry::setlOffset (uint32_t lOffset) {
        m_lOffset = lOffset;
        if (m_lOffset == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取数据类型标志位
     * 返回值：数据类型标志位
     * 更新时间：2016/1/30*/
    const
    uint8_t *DataIndexEntry::getFlag () {
        return m_pFlag;
    }

    /**
     * 说明：获取起始块号
     * 返回值：起始块号
     * 更新时间：2016/1/30*/
    uint32_t DataIndexEntry::getStartBlockSerialNumber () {
        return m_iStartBlockSerialNum;
    }

    /**
     * 说明：获取块数量
     * 返回值：块数量
     * 更新时间：2016/1/30*/
    uint32_t DataIndexEntry::getBlockNumber () {
        return m_iBlockNum;
    }

    /**
     * 说明：获取偏移量
     * 返回值：偏移量
     * 更新时间：2016/1/30*/
    uint32_t DataIndexEntry::getlOffset () {
        return m_lOffset;
    }


}
