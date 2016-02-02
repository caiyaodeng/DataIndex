#ifndef _ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_
#define _ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_

#include "EntityCustomTableProperty.h"

namespace NS_DataIndex {

    /**
     * 说明：单表属性结构
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class SingleTablePropertyStructure {

        CustomTableProperty *m_pHeadCustomTableProperty;    //自定义表属性对象
        uint32_t m_iTablePropertyNum;                        //表属性数量

        public:
            explicit
            SingleTablePropertyStructure ();
            ~SingleTablePropertyStructure ();

        public:
            /**
             * 说明：设置表属性数量
             * 参数：表属性数量
             * 返回值：是否设置成功
             * 更新时间：2016/1/28*/
            bool setTablePropertyNumber (uint32_t iTablePropertyNum);

            /**
             * 说明：获取表属性数量
             * 返回值：表属性数量
             * 更新时间：2016/1/28*/
            uint32_t getTablePropertyNumber ();

            /**
             * 说明：添加一个类型
             * 参数：数据类型结构信息
             * 返回值：是否添加成功
             * 更新时间：2016/2/1*/
            bool addDataType (const CustomTableProperty *pHeadCustomTableProperty);

            /**
             * 说明：删除一个类型
             * 参数：数据类型名称
             * 返回值：是否删除成功
             * 更新时间：2016/2/1*/
            bool deleteDataType (const uint8_t *pDataTypeNameIn);

            /**
             * 说明：查询一个类型
             * 参数：数据类型名称
             * 返回值：是否找到
             * 更新时间：2016/2/1*/
            bool quaryDataType (const uint8_t *pDataTypeNameIn);

    };
}

#endif /* ENTITY_SINGLE_TABLE_PROPERTY_STRUCTURE_H_ */
