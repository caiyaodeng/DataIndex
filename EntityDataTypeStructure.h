#ifndef ENTITY_DATA_TYPE_STRUCTURE_H_
#define ENTITY_DATA_TYPE_STRUCTURE_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "EntityDataTypeInformation.h"

namespace NS_DataIndex {

    /**
     * 说明：引导区文件（数据库基本信息）
     * 创建人：林宇斌
     * 更新时间：2016/1/27*/
    class DataTypeStructure {
        uint8_t *m_iDatabaseName;               //数据库名称
        uint32_t m_iInitBlockNumber;               //初始块数量
        uint32_t m_iSingleExpandBlockNumber;       //单次扩充块数量
        uint32_t m_iNewExpandBlockNumber;          //新扩充块数
        DataTypeInformation *m_objDataTypeInformation;      //单数据类型结构信息对象
    public:

        explicit
        DataTypeStructure();
        ~DataTypeStructure();

    public:
        /**
         * 说明：设置数据库名称
         * 参数：数据库名称
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDatabaseName(const uint8_t *iDatabaseName);

        /**
         * 说明：设置初始块数量
         * 参数：初始块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setInitBlockNumber(const uint32_t iInitBlockNumber);

        /**
         * 说明：设置单次扩充块数量
         * 参数：单次扩充块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setSingleExpandBlockNumber(const uint32_t iSingleExpandBlockNumber);

        /**
         * 说明：设置新扩充块数
         * 参数：新扩充块数
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setNewExpandBlockNumber(const uint32_t iNewExpandBlockNumber);

        /**
         * 说明：获取数据库名称
         * 返回值：数据库名称
         * 更新时间：2016/1/27*/
        const
        uint8_t *getDatabaseName();

        /**
         * 说明：获取初始块数量
         * 返回值：初始块数量
         * 更新时间：2016/1/27*/
        const
        uint32_t getInitBlockNumber();

        /**
         * 说明：获取单次扩充块数量
         * 返回值：单次扩充块数量
         * 更新时间：2016/1/27*/
        const
        uint32_t getSingleExpandBlockNumber();

        /**
         * 说明：获取新扩充块数
         * 返回值：新扩充块数
         * 更新时间：2016/1/27*/
        const
        uint32_t getNewExpandBlockNumber();
    };

}




#endif /* ENTITY_DATA_TYPE_STRUCTURE_H_ */
