#include "../../../include/Kernel/FreeSpace/ModelFreeBlockManagement.h"

namespace NS_DataIndex {


    ModelFreeBlockManagement::ModelFreeBlockManagement ()
        :
        m_iTotalBlockNum (0),
        m_iTotalPartitionSize (0),
        m_iTotalDataSize (0),
        m_iUsedBlockNum (0),
        m_iDataBlockNum (0),
        m_iUnUsedBlockNum (0) {
    }

    ModelFreeBlockManagement::~ModelFreeBlockManagement () {
    }

    /**
     * 说明：分配空闲块
     * 参数：所需块数，接收块数组
     * 返回值：分配成功的块数
     * 更新时间：2016/1/29*/
    uint32_t ModelFreeBlockManagement::getRealFreeBlock (const uint32_t iBlockNumIn, uint32_t *&iBlockOut) {

//        bool isSuccessed = false;
//        iBlockOut = new uint32_t [iBlockNumIn];  //准备从外部释放
//        uint32_t i = 0;
//        /*获取空闲块失败*/
//             if (iBlockOut[i] == -1) {
//             }
//
//        /*更新块管理状态*/
//        m_iDataBlockNum = m_iUsedBlockNum - 1;

        return (iBlockNumIn);
    }

    /**
     * 说明：回收空闲块
     * 参数：要回收块号
     * 返回值：是否回收成功
     * 更新时间：2016/1/29*/
    bool ModelFreeBlockManagement::returnRealBlock (const uint32_t iBlockIn) {

//        bool isSuccessed = false;
//        Block *objBlock = new Block ();
//        objBlock->clearBlock ();
//
//        /*释放资源*/
//        delete objBlock;
//        objBlock = NULL;

        return true;
    }
    
    /**
     * 说明：更新磁盘对应模块
     * 返回值：是否更新成功
     * 更新时间：2016/1/29*/
    bool ModelFreeBlockManagement::updateDisk (uint8_t *&pBufOut) {
        return true;
    }

    /**
     * 说明：更新内存对应模块
     * 返回值：是否更新成功
     * 更新时间：2016/1/29*/
    bool ModelFreeBlockManagement::updateMemory  (const uint8_t *pBufIn, const uint32_t iLengthIn) {

//        m_iUnUsedBlockNum = m_iTotalBlockNum - m_iUsedBlockNum;
//        m_iDataBlockNum = m_iUsedBlockNum - 1;
    
        return true;
    }

    /**
     * 说明：申请空闲块
     * 参数：存储的数据长度，接收块数组
     * 返回值：申请成功的块数
     * 更新时间：2016/1/29*/
    uint32_t ModelFreeBlockManagement::getFreeBlock (const uint32_t fileLengthIn, uint32_t *&iBlockSetOut) {

//        uint32_t iBlockNum = -1;
//
//        uint32_t iFileLength = fileLengthIn;
//
//        while(iFileLength >= SINGLE_BLOCK_DATA_SIZE){
//             iFileLength -= SINGLE_BLOCK_DATA_SIZE;
//        }
//        iBlockNum = iFileLength != 0 ? (fileLengthIn/SINGLE_BLOCK_DATA_SIZE) +1 : (fileLengthIn/SINGLE_BLOCK_DATA_SIZE);
//
//        if (iBlockNum <= 0){
//            return -1;
//        }

//        return getRealFreeBlock(iBlockNum, iBlockSetOut);
    }

    /**
     * 说明：释放空闲块
     * 参数：块数量，要释放的块数组
     * 返回值：是否释放成功
     * 更新时间：2016/1/29*/
    bool ModelFreeBlockManagement::returnBlock (const uint32_t iBlockNumIn, const uint32_t *iBlockSetIn) {

//        bool isSuccessed = false;
//
//        /*回收空闲块*/
//        for (int i = 0; i < iBlockNumIn; i++) {
//            isSuccessed = returnRealBlock (iBlockSetIn[i]);
//            if (!isSuccessed){
//                return false;
//            }
//        }

        return true;
    }

    /**
     * 说明：获取已使用分区量
     * 参数：无
     * 返回值：已使用分区量
     * 更新时间：2016/1/29*/
    uint32_t ModelFreeBlockManagement::getUsedPartitionSize () {
        return 0;
    }

}

