#ifndef _INCLUDE_DATA_TYPE_DATA_TYPE_H_
#define _INCLUDE_DATA_TYPE_DATA_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

namespace NS_DataIndex {

    class DataType {

    public:
        explicit
        DataType ();
        ~DataType ();

    private:
        /**
         * 说明：扩充一次
         * 函数说明：expandOnce
         * 输入参数：无
         * 返回值：bool 是否扩充成功
         * 更新时间：2016/2/13*/
        bool expandOnce ();

    public:
        /**
         * 说明：新建数据类型
         * 函数说明：createNewDataType
         * 输入参数：表名，表名长度，属性数量
         * 返回值：uint32_t 【-1:创建失败；1：创建成功】
         * 更新时间：2016/2/13*/
        uint32_t createNewDataType (const uint8_t *pTableName, uint32_t iTableNameLengthIn, uint32_t iNumIn);

        /**
         * 说明：删除数据类型
         * 函数说明：deleteDataType
         * 输入参数：表名，表名长度
         * 返回值：uint32_t 【-1:删除失败；1：删除成功】
         * 更新时间：2016/2/13*/
        uint32_t deleteDataType (const uint8_t *pTableName, uint32_t iTableNameLengthIn);

        /**
         * 说明：查询数据
         * 函数说明：quaryData
         * 输入参数：表名，表名长度，要查询的属性序号 ，属性值（uint8_t *）
         * 返回值：uint32_t 【-1: 查询失败；正数：属性值长度】
         * 更新时间：2016/2/13*/
        uint32_t quaryData (const uint8_t *pTableName, uint32_t iTableNameLengthIn, uint32_t iSerialNumIn, const uint8_t *pData);

        /**
         * 说明：更新数据
         * 函数说明：updateData
         * 输入参数：表名，表名长度，要更新的属性序号 ，属性值数组
         * 返回值：uint32_t 【-1:更新失败；1：更新成功】
         * 更新时间：2016/2/13*/
        uint32_t updateData (const uint8_t *pTableName, uint32_t iTableNameLengthIn, uint32_t iSerialNumIn, const uint8_t *pData);

    };
}

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_DATA_TYPE_DATA_TYPE_H_ */
