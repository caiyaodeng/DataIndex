#ifndef _INCLUDE_BOOT_MODEL_BOOT_MANAGEMENT_H_
#define _INCLUDE_BOOT_MODEL_BOOT_MANAGEMENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "../Entity/EntityDataTypeSet.h"

namespace NS_DataIndex {

    /**
     * 说明：引导区管理
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class Boot {

        uint32_t m_iExpandBlockNum;         //当前扩充块数
        DataTypeSet *m_objDataTypeSet;      //所有数据类型集合对象

    public:
        explicit
        Boot ();
        ~Boot ();

    public:
        /**
         * 说明：设置当前扩充块数
         * 参数：当前扩充块数
         * 返回值：是否扩充成功
         * 更新时间：2016/1/30*/
        bool setExpandBlockNum (uint32_t iExpandBlockNum);

        /**
         * 说明：获取当前扩充块数
         * 返回值：当前扩充块数
         * 更新时间：2016/1/30*/
        uint32_t getExpandBlockNum ();

        /**
         * 说明：添加一个类型
         * 参数：数据类型结构信息
         * 返回值：是否添加成功
         * 更新时间：2016/1/30*/
        bool addDataType (const SingleDataTypeInformation *objSingleDataTypeInformationIn);

        /**
         * 说明：删除一个类型
         * 参数：数据类型名称
         * 返回值：是否删除成功
         * 更新时间：2016/1/30*/
        bool deleteDataType (const uint8_t *pDataTypeNameIn);

        /**
         * 说明：查询一个类型
         * 参数：数据类型名称
         * 返回值：是否找到
         * 更新时间：2016/1/30*/
        bool quaryDataType (const uint8_t *pDataTypeNameIn);
    };
}

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_BOOT_MODELBOOTMANAGEMENT_H_ */
