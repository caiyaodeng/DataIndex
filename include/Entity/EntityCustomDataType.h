#ifndef INCLUDE_ENTITY_ENTITYCUSTOMDATATYPE_H_
#define INCLUDE_ENTITY_ENTITYCUSTOMDATATYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

namespace NS_DataIndex {

    /**
     * 说明：自定义数据类型
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class CustomDataType {

        uint8_t *m_pTypeName;       //类型名称
        uint32_t m_iTypeNameLength; //类型名称长度
        uint8_t *m_pType;           //表示类型
        uint32_t m_iTypeLength;     //表示类型长度

    public:
        explicit
        CustomDataType ();
        ~CustomDataType ();

    public:
        /**
         * 说明：设置类型名称,类型名称长度
         * 参数：类型名称,
         * 返回值：是否设置成功,类型名称长度
         * 更新时间：2016/2/1*/
        bool setType (const uint8_t *pTypeName, uint32_t iTypeNameLength);

        /**
         * 说明：设置表示类型,表示类型长度
         * 参数：表示类型,表示类型长度
         * 返回值：是否设置成功
         * 更新时间：2016/2/1*/
        bool setRepresentationType (const uint8_t *pType, uint32_t iTypeLength);

        /**
         * 说明：获取类型名称,类型名称长度
         * 参数：类型名称接收器，类型名称长度接收器
         * 返回值：是否获取成功
         * 更新时间：2016/2/1*/
        bool getType (uint8_t *&pTypeNameOut, uint32_t &iTypeNameLengthOut);

        /**
         * 说明：获取表示类型,表示类型长度
         * 参数：表示类型接收器，表示类型长度接收器
         * 返回值：是否获取成功
         * 更新时间：2016/2/1*/
        bool getRepresentationType (uint8_t *&pRepresentationTypeNameOut, uint32_t &iRepresentationTypeNameLengthOut);
    };
}

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_ENTITY_ENTITYCUSTOMDATATYPE_H_ */
