#ifndef _ENTITY_MY_DATA_TYPE_H_
#define _ENTITY_MY_DATA_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

namespace NS_DataIndex {

    /**
     * 说明：我的数据类型
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class MyDataType {

        uint8_t *m_pTypeName;       //类型名称
        uint32_t m_iTypeNameLength; //类型名称长度
        uint8_t *m_pType;           //表示类型
        uint32_t m_iTypeLength;     //表示类型长度

    public:
        explicit
        MyDataType ();
        ~MyDataType ();

    public:
        /**
         * 说明：设置类型名称
         * 参数：类型名称
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setTypeName (const uint8_t *pTypeName);

        /**
         * 说明：设置类型名称长度
         * 参数：类型名称长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setTypeNameLength (uint32_t iTypeNameLength);

        /**
         * 说明：设置表示类型
         * 参数：表示类型
         * 返回值：是否设置成功
         * 更新时间：2016/1/29*/
        bool setType (const uint8_t *pType);

        /**
         * 说明：设置表示类型长度
         * 参数：表示类型长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/29*/
        bool setTypelength (uint32_t iTypeLength);

        /**
         * 说明：获取类型名称
         * 返回值：类型名称
         * 更新时间：2016/1/28*/
        const
        uint8_t *getTypeName ();

        /**
         * 说明：获取类型名称长度
         * 返回值：类型名称长度
         * 更新时间：2016/1/28*/
        uint32_t getTypeNameLength ();

        /**
         * 说明：获取
         * 返回值：表示类型
         * 更新时间：2016/1/29*/
        const
        uint8_t *getType ();

        /**
         * 说明：获取
         * 返回值：表示类型长度
         * 更新时间：2016/1/29*/
        uint32_t getTypeLength ();
    };

}

#ifdef __cplusplus
}
#endif

#endif /* ENTITY_MY_DATA_TYPE_H_ */
