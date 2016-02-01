#ifndef _ENTITY_SINGLE_DATA_TYPE_INFORMATION_H_
#define _ENTITY_SINGLE_DATA_TYPE_INFORMATION_H_

#ifdef __cplusplus
extern "C" {
#endif

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
        uint32_t m_iTableSerialNum;         //对应块号
        uint32_t m_iStartBlockserialNum;    //引导块号

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
        bool setDataStructureLength (uint32_t iDataStructureLength);

        /**
         * 说明：设置数据类型名称,数据类型名称长度
         * 参数：数据类型名称,数据类型名称长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataType (const uint8_t * pDataTypeName, uint32_t iDataTypeNameLength);

        /**
         * 说明：设置对应块号
         * 参数：对应块号
         * 返回值：是否设置成功
         * 更新时间:2016/1/27*/
        bool setTableSerialNumber (uint32_t iTableSerialNum);

        /**
         * 说明：设置引导块号
         * 参数：引导块号
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setStartBlockserialNumber (uint32_t iStartBlockserialNum);

        /**
         * 说明：获取数据类型结构长度
         * 返回值：数据类型结构长度
         * 更新时间：2016/1/27*/
        uint32_t getDataStructureLength ();

        /**
         * 说明：获取数据类型名称,数据类型名称长度
         * 参数：数据类型名称接收器,数据类型名称长度接收器
         * 返回值：是否获取成功
         * 更新时间：2016/1/27*/
        bool getDataType (uint8_t *&pDataTypeNameOut, uint32_t &iDataTypeNameLengthOut);

        /**
         * 说明：获取对应块号
         * 返回值：对应块号
         * 更新时间：2016/1/27*/
        uint32_t getTableSerialNumber ();

        /**
         * 说明：获取引导块号
         * 返回值：引导块号
         * 更新时间：2016/1/28*/
        uint32_t getStartBlockserialNumber ();
    };

}

#ifdef __cplusplus
}
#endif

#endif /* ENTITY_SINGLE_DATA_TYPE_INFORMATION_H_ */
