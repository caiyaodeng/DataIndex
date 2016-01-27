#ifndef ENTITY_DATA_TYPE_INFORMATION_H_
#define ENTITY_DATA_TYPE_INFORMATION_H_

namespace NS_DataIndex {

/**
 * 说明：单数据类型结构信息
 * 创建人：林宇斌
 * 更新时间：2016/1/27*/
    class DataTypeInformation {
        uint32_t m_iDataStructureLength;    //数据类型结构长度
        uint32_t m_iDataNameLength;         //数据类型名称长度
        uint8_t *m_iDataName;               //数据类型名称
        uint32_t m_iBlockNumber;            //对应块号
    public:

        explicit
        DataTypeInformation();
        ~DataTypeInformation();

    public:
        /**
         * 说明：设置数据类型结构长度
         * 参数：数据类型结构长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataStructureLength(const uint32_t iDataStructureLength);

        /**
         * 说明：设置数据类型名称长度
         * 参数：数据类型名称长度
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataNameLength(const uint32_t iDataNameLength);

        /**
         * 说明：设置数据类型名称
         * 参数：数据类型名称
         * 返回值：是否设置成功
         * 更新时间：2016/1/27*/
        bool setDataName(const uint8_t * iDataName);

        /**
         * 说明：设置对应块号
         * 参数：对应块号
         * 返回值：是否设置成功
         * 更新时间:2016/1/27*/
        bool setBlockNumber(const uint32_t iBlockNumber);

        /**
         * 说明：获取数据类型结构长度
         * 返回值：数据类型结构长度
         * 更新时间：2016/1/27*/
        const
        uint32_t getDataStructureLength();

        /**
         * 说明：获取数据类型名称长度
         * 返回值：数据类型名称长度
         * 更新时间：2016/1/27*/
        const
        uint32_t getDataNameLength();

        /**
         * 说明：获取数据类型名称
         * 返回值：数据类型名称
         * 更新时间：2016/1/27*/
        const
        uint8_t *getDataName();

        /**
         * 说明：获取对应块号
         * 返回值：对应块号
         * 更新时间：2016/1/27*/
        const
        uint32_t getBlockNumber();

    };

}

#endif /* ENTITY_DATA_TYPE_INFORMATION_H_ */
