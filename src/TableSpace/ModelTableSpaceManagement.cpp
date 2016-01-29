#include "ModelTableSpaceManagement.h"

namespace NS_DataIndex {

    ModelTableSpace::ModelTableSpace()
        :
        m_objTableSet(0),
        m_iExpandBlockNum(0) {
            m_objTableSet = new TableSet[500]();
    }

    ModelTableSpace::~ModelTableSpace() {
        if (m_objTableSet != 0) {
            delete m_objTableSet;
            m_objTableSet = NULL;
        }
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
    bool deleteTableEntry (uint32_t iTableSerialNumIn) {
        return true;
    }

    /**
     * 说明：查询表
     * 参数：块编号
     * 返回值：是否找到
     * 更新时间：2016/1/29*/
    bool quaryTableEntry (uint32_t iTableSerialNumIn) {
        return true;
    }

    /**
     * 说明：扩充一次表
     * 返回值：是否扩充成功
     * 更新时间：2016/1/29*/
    bool expandTableSpace () {
        return true;
    }
}



