#ifndef _MODEL_DISK_BUFFER_MANAGEMENT_H_
#define _MODEL_DISK_BUFFER_MANAGEMENT_H_

#include <stdint.h>
#include <string.h>
#include "../Entity/EntityBlock.h"
namespace NS_DataIndex {

/**
     * 说明:磁盘缓冲区管理
     * 创建人：蔡曜镫
     * 更新时间：2016/1/29*/
    class ModelDiskBufferManagement {

        uint8_t *m_chBuffer;                        //缓冲区
        uint32_t m_iValidDataLength;                //有效数据量
        uint32_t m_iBlockSerialNumber;              //操作逻辑块号
        IS_FULL m_fStatusFlag;                      //缓冲区状态标志

    public:
        explicit
        ModelDiskBufferManagement ();
        ~ModelDiskBufferManagement ();

    public:
        /**
         * 说明：判断缓冲区状态
         * 返回值：缓冲区状态
         * 更新时间：2016/1/29*/
        IS_FULL getBufferStatus ();

        /**
         * 说明：添加数据
         * 参数：新数据， 新数据长度，溢出数据，溢出长度,物理块号
         * 返回值：是否操作成功
         * 更新时间：2016/1/29*/
        bool mergeData (const uint8_t *pNewBufIn, const uint32_t iLengthIn, uint8_t *&pBufOut, uint32_t &iLengthOut, uint32_t iPhysicalBlockNumber);

        /**
         * 说明：清空缓冲区
         * 返回值：是否操作成功
         * 更新时间：2016/1/29*/
        bool clearBuffer ();

        /**
         * 说明：获取缓冲区中整块数据
         * 参数：接收缓冲区数据容器，缓冲区中有效数据量
         * 返回值：是否操作成功
         * 更新时间：2016/1/29*/
        bool getBufferBlockData (uint8_t *&pBufOut, uint32_t &iLengthOut);

        /**
         * 说明：获取操作逻辑块号
         * 返回值：操作物理块号
         * 更新时间：2016/1/29*/
        uint32_t getActiveLogicalBlockSerialNumber ();

        /**
         * 说明：获取缓冲区中当前数据量
         * 返回值：当前数据量
         * 更新时间：2016/1/29*/
        uint32_t getDataLength ();

        /**
         * 说明：设置缓冲区活动逻辑块号
         * 参数：逻辑块号
         * 返回值：是否设置成功
         * 更新时间：2016/1/29*/
        bool setActivelogicalBlockSerialNum (uint32_t iLogicalSerialNum);

        /**
         * 说明:放入整块尾块数据
         * 参数：尾块
         * 返回值：是否操作成功
         * 更新时间：2016/1/29*/
        bool putLastBlock (const Block *pLastBlockIn);

        /**
         * 说明：缓冲区数据写入文件
         * 参数：当前物理块号
         * 返回值：是否写入成功
         * 更新时间：2016/1/29*/
        bool writeBufIn (uint32_t iActiveBlockNumber);

        /**
         * 说明：获取缓冲块
         * 返回值：缓冲块
         * 更新时间：2016/1/29*/
        const
        Block *getBufDataBlock ();
    };
}
#endif
