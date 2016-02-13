#include "../../include/TableSpace/TableSpace.h"
namespace NS_DataIndex {

    TableSpace::TableSpace () {
    }

    TableSpace::~TableSpace() {

    }

    /**
     * 说明：扩充一次
     * 函数说明：expandOnce
     * 输入参数：无
     * 返回值：bool 是否扩充成功
     * 更新时间：2016/2/13*/
    bool TableSpace::expandOnce () {
        return true;
    }

    /**
     * 说明：创建表
     * 函数说明：createTable
     * 输入参数：表名，表名长度，方括号数组（属性），数量
     * 返回值：uint32_t 【-1:创建失败；1：创建成功】
     * 更新时间：2016/2/13*/
    uint32_t TableSpace::createTableEntry (const uint8_t *pTableNameIn, uint32_t iTableNameLengthIn, const DataReciver::SquareBrackets *pSquareBracketsIn, uint32_t iNumIn) {
        return 0;
    }

    /**
     * 说明：删除表
     * 函数说明：deleteTable
     * 输入参数：表名，表名长度
     * 返回值：uint32_t 【-1:删除失败；1：删除成功】
     * 更新时间：2016/2/13*/
    uint32_t TableSpace::deleteTable (const uint8_t *pTableNameIn, uint32_t iTableNameLengthIn) {
        return 0;
    }

    /**
     * 说明：查询表
     * 函数说明：quaryTable
     * 输入参数：表名，表名长度，CustomDataType类型数组（引用）
     * 返回值：uint32_t 【-1:查询失败；正数：属性的数量】
     * 更新时间：2016/2/13*/
    uint32_t TableSpace::quaryTable (const uint8_t *pTableNameIn, uint32_t iTableNameLengthIn, CustomDataType *&pCustomDataTypeOut) {
        return 0;
    }
}



