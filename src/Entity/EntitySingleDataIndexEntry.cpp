#include "../../include/Entity/EntitySingleDataIndexEntry.h"

namespace NS_DataIndex {

    SingleDataIndexEntry::SingleDataIndexEntry ()
        :
                m_iInitBlockNum (0),
                m_iNewExpandBlockNum (0),
                m_pSingleDataIndexEntry (NULL) {
                    m_pSingleDataIndexEntry = new SingleDataIndexEntryNode ();
    }

    SingleDataIndexEntry::~SingleDataIndexEntry () {
        if (m_pSingleDataIndexEntry != NULL) {
            delete m_pSingleDataIndexEntry;
            m_pSingleDataIndexEntry = NULL;
        }
    }

    /**
     * 说明：递归释放本对象
     * 参数：索引分区对象节点
     * 更新时间：2016/1/30*/
    void SingleDataIndexEntry::recursiveReleaseMemory (SingleDataIndexEntryNode *pNode) {

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
     * 说明：获取初始块数量
     * 返回值：初始块数量
     * 更新时间：2016/1/28*/
    uint32_t SingleDataIndexEntry::getInitBlockNumber () {
        return m_iInitBlockNum;
    }

    /**
     * 说明：获取新扩充块数
     * 返回值：新扩充块数
     * 更新时间：2016/1/28*/
    uint32_t SingleDataIndexEntry::getNewExpandBlockNumber () {
        return m_iNewExpandBlockNum;
    }

    /**
     * 说明：新增一个索引分区对象
     * 参数：新增的索引分区对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool SingleDataIndexEntry::addSingleDataIndexEntry (const SingleDataIndexEntryNode *pSingleDataIndexEntryNodeIn) {
        return true;
    }

    /**
     * 说明：查询索引分区对象
     * 参数：数据类型标志位，标志位长度
     * 返回值：索引分区对象
     * 更新时间：2016/1/30*/
    const
    SingleDataIndexEntry *SingleDataIndexEntry::quarySingleDataIndexEntry (const uint8_t *pFlagIn, const uint32_t iFlagLengthIn) {
        return NULL;
    }
}





