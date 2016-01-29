#ifndef _MODEL_TABLE_SPACE_MANAGEMENT_H_
#define _MODEL_TABLE_SPACE_MANAGEMENT_H_

#include "../Entity/EntityTableSet.h"

namespace NS_DataIndex {

    class ModelTableSpace {

        TableSet *m_objTableSet;        //表集合数组
        uint32_t m_iExpandBlockNum;     //当前扩充块数
        //TODO //B+树索引管理

    public:
        explicit
        ModelTableSpace ();
        ~ModelTableSpace ();

    public:

        /**
         * 说明：创建表
         * 参数：表属性结构
         * 返回值：是否创建成功
         * 更新时间：2016/1/29*/
        bool addTableEntry (const SingleTablePropertyStructure *pTablePropertyStructureIn);

        /**
         * 说明：删除表
         * 参数：块编号
         * 返回值：是否删除成功
         * 更新时间：2016/1/29*/
        bool deleteTableEntry (uint32_t iTableSerialNumIn);

        /**
         * 说明：查询表
         * 参数：块编号
         * 返回值：是否找到
         * 更新时间：2016/1/29*/
        bool quaryTableEntry (uint32_t iTableSerialNumIn);

        /**
         * 说明：扩充一次表
         * 返回值：是否扩充成功
         * 更新时间：2016/1/29*/
        bool expandTableSpace ();
    };
}




#endif /* MODELTABLESPACEMANAGEMENT_H_ */
