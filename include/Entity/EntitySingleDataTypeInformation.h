#ifndef _ENTITY_SINGLE_DATA_TYPE_INFORMATION_H_
#define _ENTITY_SINGLE_DATA_TYPE_INFORMATION_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
namespace NS_DataIndex {

    /**
     * 说明：单数据类型结构信息
     * 创建人：林宇斌
     * 更新时间：2016/1/27*/
    class SingleDataTypeInformation {

        uint32_t m_iDataStructureLength;    //数据类型结构长度
        uint32_t m_iDataNameLength;         //数据类型名称长度
        uint8_t *m_pDataName;               //数据类型名称
        uint32_t m_iBlockserialNum;         //对应块号
        uint32_t m_iBootBlockNum;           //引导块号

    public:
        explicit
        SingleDataTypeInformation ();
        ~SingleDataTypeInformation ();

    public:
        /**
         * 说明：设置数据类型结构长度
         * 参数：数据类型结构长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataStructureLength (const uint32_t iDataStructureLength);

        /**
         * 说明：设置数据类型名称长度
         * 参数：数据类型名称长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataNameLength (const uint32_t iDataNameLength);

        /**
         * 说明：设置数据类型名称
         * 参数：数据类型名称
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataName (const uint8_t * pDataName);

        /**
         * 说明：设置对应块号
         * 参数：对应块号
         * 返回值：是否设置成功
         * 更新时间:2016/1/27*/
        bool setBlockserialNumber (const uint32_t m_iBlockserialNum);

        /**
         * 说明：设置引导块号
         * 参数：引导块号
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setBootBlockNumber (const uint32_t m_iBootBlockNum);

        /**
         * 说明：获取数据类型结构长度
         * 返回值：数据类型结构长度
         * 更新时间：2016/1/27*/
        const
        uint32_t getDataStructureLength ();

        /**
         * 说明：获取数据类型名称长度
         * 返回值：数据类型名称长度
         * 更新时间：2016/1/27*/
        const
        uint32_t getDataNameLength ();

        /**
         * 说明：获取数据类型名称
         * 返回值：数据类型名称
         * 更新时间：2016/1/27*/
        const
        uint8_t *getDataName ();

        /**
         * 说明：获取对应块号
         * 返回值：对应块号
         * 更新时间：2016/1/27*/
        const
        uint32_t getBlockserialNumber ();

        /**
         * 说明：获取引导块号
         * 返回值：引导块号
         * 更新时间：2016/1/28*/
        const
        uint32_t getBootBlockNumber ();
    };

}

#endif /* ENTITY_SINGLE_DATA_TYPE_INFORMATION_H_ */
