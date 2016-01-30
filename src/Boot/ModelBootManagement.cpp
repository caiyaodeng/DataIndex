#include "../../include/Boot/ModelBootManagement.h"

namespace NS_DataIndex {

    Boot::Boot ()
        :
                m_iExpandBlockNum (0),
                m_objDataTypeSet (NULL) {
                    m_objDataTypeSet = new DataTypeSet ();
    }

    Boot::~Boot () {
        if (m_objDataTypeSet != NULL) {
            delete m_objDataTypeSet;
            m_objDataTypeSet = NULL;
        }
    }

    /**
     * 说明：设置当前扩充块数
     * 参数：当前扩充块数
     * 返回值：是否扩充成功
     * 更新时间：2016/1/30*/
    bool Boot::setExpandBlockNum (uint32_t iExpandBlockNum) {
        m_iExpandBlockNum = iExpandBlockNum;
        if (m_iExpandBlockNum == 0) {
            return false;
        }
        return true;
    }

    /**
     * 说明：获取当前扩充块数
     * 返回值：当前扩充块数
     * 更新时间：2016/1/30*/
    uint32_t Boot::getExpandBlockNum () {
        return m_iExpandBlockNum;
    }

    /**
     * 说明：添加一个类型
     * 参数：数据类型结构信息
     * 返回值：是否添加成功
     * 更新时间：2016/1/30*/
    bool Boot::addDataType (const SingleDataTypeInformation *objSingleDataTypeInformationIn) {
        return true;
    }

    /**
     * 说明：删除一个类型
     * 参数：数据类型名称
     * 返回值：是否删除成功
     * 更新时间：2016/1/30*/
    bool Boot::deleteDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：查询一个类型
     * 参数：数据类型名称
     * 返回值：是否找到
     * 更新时间：2016/1/30*/
    bool Boot::quaryDataType (const uint8_t *pDataTypeNameIn) {
        return true;
    }

    /**
     * 说明：扩充一次引导区
     * 返回值：是否扩充成功
     * 更新时间：2016/1/30*/
    bool Boot::expandTableSpace () {
        return true;
    }
}


