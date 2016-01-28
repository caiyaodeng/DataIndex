#ifndef ENTITY_MY_DATA_TYPE_H_
#define ENTITY_MY_DATA_TYPE_H_

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

namespace NS_DataIndex {

    /**
     * 说明：我的数据类型
     * 创建人：林宇斌
     * 更新时间：2016/1/28*/
    class MyDataType {
        uint8_t *m_iTypeName;       //类型名称
        uint32_t m_iTypeNameLength; //类型名称长度

        /***********************待合并******************************/
        //uint8_t *m_iType;           //表示类型
        //uint32_t m_iTypelength;     //表示类型长度
        /********************************************************/

    public:
        explicit
        MyDataType();
        ~MyDataType();

    public:
        /**
         * 说明：设置类型名称
         * 参数：类型名称
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setTypeName(const uint8_t *iTypeName);

        /**
         * 说明：设置类型名称长度
         * 参数：类型名称长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/28*/
        bool setTypeNameLength(const uint32_t iTypeNameLength);

        /**
         * 说明：获取类型名称
         * 返回值：类型名称
         * 更新时间：2016/1/28*/
        const
        uint8_t *getTypeName();

        /**
         * 说明：获取类型名称长度
         * 返回值：类型名称长度
         * 更新时间：2016/1/28*/
        const
        uint32_t getTypeNameLength();
    };

}

#endif /* ENTITY_MY_DATA_TYPE_H_ */
