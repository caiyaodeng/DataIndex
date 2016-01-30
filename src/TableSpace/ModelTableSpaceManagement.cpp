#include "../../include/TableSpace/ModelTableSpaceManagement.h"

namespace NS_DataIndex {

    ModelTableSpace::ModelTableSpace()
        :
        m_objTableSet(0),
        m_iExpandBlockNum(0),
        m_pHeadBlockSerialNum (NULL) {
            m_objTableSet = new TableSet[500]();
            m_pHeadBlockSerialNum = new BlockSerialNumEntryNode ();
    }

    ModelTableSpace::~ModelTableSpace() {
        if (m_objTableSet != 0) {
            delete m_objTableSet;
            m_objTableSet = NULL;
        }

        if (m_pHeadBlockSerialNum != NULL) {
            delete m_pHeadBlockSerialNum;
            m_pHeadBlockSerialNum = NULL;
        }
    }

    /**
     * 说明：递归释放本对象
     * 参数：B+树管理对象节点
     * 更新时间：2016/1/30*/
    void ModelTableSpace::recursiveReleaseMemory (BlockSerialNumEntryNode *objNode) {

    }

    /**
     * 说明：创建表
     * 参数：表属性结构
     * 返回值：是否创建成功
     * 更新时间：2016/1/29*/
    bool ModelTableSpace::addTableEntry (const SingleTablePropertyStructure *pTablePropertyStructureIn) {
        return true;
    }

    /**
     * 说明：删除表
     * 参数：块编号
     * 返回值：是否删除成功
     * 更新时间：2016/1/29*/
    bool ModelTableSpace::deleteTableEntry (uint32_t iTableSerialNumIn) {
        return true;
    }

    /**
     * 说明：查询表
     * 参数：块编号
     * 返回值：是否找到
     * 更新时间：2016/1/29*/
    bool ModelTableSpace::quaryTableEntry (uint32_t iTableSerialNumIn) {
        return true;
    }

    /**
     * 说明：扩充一次表
     * 返回值：是否扩充成功
     * 更新时间：2016/1/29*/
    bool ModelTableSpace::expandTableSpace () {
        return true;
    }

    /**
     * 说明：新增一个B+树管理对象
     * 参数：新的B+树管理对象
     * 返回值：是否增加成功
     * 更新时间：2016/1/30*/
    bool ModelTableSpace::addBlockSerialNumEntry (const BlockSerialNumEntryNode *objBlockSerialNumEntryNodeIn) {
            return true;
    }

    /**
     * 说明：查询一个B+树管理对象
     * 参数：块编号
     * 返回值：一个B+树管理对象
     * 更新时间：2016/1/30*/
    const
    BlockSerialNumEntry *ModelTableSpace::quaryBlockSerialNumEntry (const uint32_t iBlockSerialNumIn) {
            return NULL;
    }
}



