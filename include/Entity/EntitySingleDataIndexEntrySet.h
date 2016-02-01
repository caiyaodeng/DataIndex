#ifndef _INCLUDE_ENTITY_ENTITY_SINGLE_DATA_INDEX_ENTRY_SET_H_
#define _INCLUDE_ENTITY_ENTITY_SINGLE_DATA_INDEX_ENTRY_SET_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

namespace NS_DataIndex {

    class DataIndexEntrySet;

    /**
     * 说明：索引分区项
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class SingleDataIndexEntryNode {

    public:
        DataIndexEntrySet *m_pDataIndexEntrySet;
        SingleDataIndexEntryNode *m_pNext;

        SingleDataIndexEntryNode ();
        ~SingleDataIndexEntryNode ();
    };

    /**
     * 说明：索引分区项
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class DataIndexEntrySet {

        uint8_t *m_pFlag;                   //数据类型标志位
        uint32_t m_iStartBlockSerialNum;    //起始块号
        uint32_t m_iBlockNum;               //块数量
        uint32_t m_lOffset;                 //偏移量

    public:
        DataIndexEntrySet ();
        ~DataIndexEntrySet ();
    public:

        /**
         * 说明：设置数据类型标志位
         * 参数：数据类型标志位
         * 返回值：是否设置成功
         * 更新时间：2016/1/30*/
        bool setFlag (const uint8_t *pFlag);

        /**
         * 说明：设置起始块号
         * 参数：起始块号
         * 返回值：是否设置成功
         * 更新时间：2016/1/30*/
        bool setStartBlockSerialNumber (uint32_t iStartBlockSerialNum);

        /**
         * 说明：设置块数量
         * 参数：块数量
         * 返回值：是否设置成功
         * 更新时间：2016/1/30*/
        bool setBlockNumber (uint32_t iBlockNum);

        /**
         * 说明：设置偏移量
         * 参数：偏移量
         * 返回值：是否设置成功
         * 更新时间：2016/1/30*/
        bool setlOffset (uint32_t lOffset);

        /**
         * 说明：获取起始块号
         * 返回值：起始块号
         * 更新时间：2016/1/30*/
        uint32_t getStartBlockSerialNumber ();

        /**
         * 说明：获取块数量
         * 返回值：块数量
         * 更新时间：2016/1/30*/
        uint32_t getBlockNumber ();

        /**
         * 说明：获取偏移量
         * 返回值：偏移量
         * 更新时间：2016/1/30*/
        uint32_t getlOffset ();

        /**
         * 说明：获取数据类型标志位
         * 返回值：数据类型标志位
         * 更新时间：2016/1/30*/
        const
        uint8_t *getFlag ();
    };
}

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_ENTITY_ENTITYSINGLEDATAINDEXENTRYSET_H_ */
