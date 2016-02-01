#include "../../include/DirectIndex/EntityIndexManagement.h"

namespace NS_DataIndex {

    BlockSerialNumEntryNode::BlockSerialNumEntryNode ()
        :
                m_pBlockSerialNum (NULL),
                m_pNext (NULL) {
                    m_pBlockSerialNum = new BlockSerialNumEntry ();
    }

    BlockSerialNumEntryNode::~BlockSerialNumEntryNode () {
        if (m_pBlockSerialNum!=NULL) {
            delete m_pBlockSerialNum;
            m_pBlockSerialNum = NULL;
        }
    }

    BlockSerialNumEntry::BlockSerialNumEntry ()
        :
                m_iBlockSerialNum (0) {
    }

    BlockSerialNumEntry::~BlockSerialNumEntry () {

    }

    /**
     * 说明：设置块号
     * 参数：块号
     * 返回值：是否设置成功
     * 更新时间：2016/1/30*/
    bool BlockSerialNumEntry::setBlockSerialNumber (uint32_t iBlockSerialNum) {
        m_iBlockSerialNum = iBlockSerialNum;
        if (m_iBlockSerialNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取块号
     * 返回值：块号
     * 更新时间：2016/1/30*/
    uint32_t BlockSerialNumEntry::getBlockSerialNumber () {
        return m_iBlockSerialNum;
    }
}
