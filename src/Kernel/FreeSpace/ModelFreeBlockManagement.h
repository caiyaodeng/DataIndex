#ifndef _MODEL_FREE_BLOCK_MANAGEMENT_H_
#define _MODEL_FREE_BLOCK_MANAGEMENT_H_


/*分区常量定义*/
#define REAL_SINGLE_PARTITON_TOTAL_SIZE      21474820128//（使用单分区）实际分区有效总大小
#define REAL_DATA_TOTAL_SIZE                 19329550336//实际数据区大小
#define PARTITION_TABLE_MAP_FIELD_SIZE       1179713.25 //分区使用位图大小

#include "../../Entity/EntityBlock.h"

namespace NS_DataIndex {

/**
     * 说明:空闲块管理
     * 创建人：蔡曜镫
     * 更新时间：2016/1/29*/
    class ModelFreeBlockManagement {

        uint32_t m_iTotalBlockNum;          //总单块数
        uint32_t m_iTotalPartitionSize;     //单分区总大小
        uint32_t m_iTotalDataSize;          //数据区总大小
        uint32_t m_iUsedBlockNum;           //已用单块数
        uint32_t m_iDataBlockNum;           //数据块数
        uint32_t m_iUnUsedBlockNum;         //未使用块数

    private:
        /**
         * 说明：分配空闲块
         * 参数：所需块数，接收块数组
         * 返回值：分配成功的块数
         * 更新时间：2016/1/29*/
        uint32_t getRealFreeBlock (const uint32_t iBlockNumIn, uint32_t *&iBlockOut);
    
        /**
         * 说明：回收空闲块
         * 参数：要回收的块号
         * 返回值：是否回收成功
         * 更新时间：2016/1/29*/
        bool returnRealBlock (const uint32_t iBlockNumIn);

    public:
        /**
         * 说明：更新磁盘对应模块
         * 返回值：是否更新成功
         * 更新时间：2016/1/29*/
        bool updateDisk (uint8_t *&pBufOut);

        /**
         * 说明：更新内存对应模块
         * 返回值：是否更新成功
         * 更新时间：2016/1/29*/
        bool updateMemory (const uint8_t *pBufIn, const uint32_t iLengthIn);

    public:
        ModelFreeBlockManagement ();
        ~ModelFreeBlockManagement ();

    public:
        /**
         * 说明：申请空闲块
         * 参数：存储的数据长度，接收块数组
         * 返回值：申请成功的块数
         * 更新时间：2016/1/29*/
        uint32_t getFreeBlock (const uint32_t fileLengthIn, uint32_t *&iBlockSetOut);

        /**
         * 说明：释放空闲块
         * 参数：块数量，要释放的块数组
         * 返回值：是否释放成功
         * 更新时间：2016/1/29*/
        bool returnBlock (const uint32_t iBlockIn, const uint32_t *iBlockSetIn);

        /**
         * 说明：获取已使用分区量
         * 参数：无
         * 返回值：已使用分区量
         * 更新时间：2016/1/29*/
        uint32_t getUsedPartitionSize ();
    };
}
#endif 
