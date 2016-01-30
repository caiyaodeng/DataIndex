#ifndef _ENTITY_DATA_TYPE_STRUCTURE_H_
#define _ENTITY_DATA_TYPE_STRUCTURE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "EntityDataTypeSet.h"

namespace NS_DataIndex {

    /**
     * 说明：引导区文件（数据库基本信息）
     * 创建人：林宇斌
     * 更新时间：2016/1/27*/
    class DataTypeStructure {

        uint8_t *m_pDatabaseName;               //数据库名称
        uint32_t m_iInitBlockNum;               //初始块数量
        uint32_t m_iSingleExpandBlockNum;       //单次扩充块数量
        uint32_t m_iNewExpandBlockNum;          //新扩充块数
        DataTypeSet *m_objDataTypeSet;          //所有数据类型对象

    public:
        explicit
        DataTypeStructure ();
        ~DataTypeStructure ();

    public:
        /**
         * 说明：设置数据库名称
         * 参数：数据库名称
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDatabaseName (const uint8_t *pDatabaseName);

        /**
         * 说明：设置初始块数量
         * 参数：初始块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setInitBlockNumber (uint32_t iInitBlockNum);

        /**
         * 说明：设置单次扩充块数量
         * 参数：单次扩充块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setSingleExpandBlockNumber (uint32_t iSingleExpandBlockNum);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setNewExpandBlockNumber (uint32_t iNewExpandBlockNum);

        /**
         * 说明：获取数据库名称
         * 返回值：数据库名称
         * 更新时间：2016/1/27*/
        uint8_t *getDatabaseName ();

        /**
         * 说明：获取初始块数量
         * 返回值：初始块数量
         * 更新时间：2016/1/27*/
        uint32_t getInitBlockNumber ();

        /**
         * 说明：获取单次扩充块数量
         * 返回值：单次扩充块数量
         * 更新时间：2016/1/27*/
        uint32_t getSingleExpandBlockNumber ();

        /**
         * 说明：获取新扩充块数
         * 返回值：新扩充块数
         * 更新时间：2016/1/27*/
        uint32_t getNewExpandBlockNumber ();
    };

}

#ifdef __cplusplus
}
#endif


#endif /* ENTITY_DATA_TYPE_STRUCTURE_H_ */
