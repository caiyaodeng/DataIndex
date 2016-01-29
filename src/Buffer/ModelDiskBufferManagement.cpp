#include "ModelDiskBufferManagement.h"

namespace NS_DataIndex {

    ModelDiskBufferManagement::ModelDiskBufferManagement ()
        :
            m_chBuffer (NULL),
            m_iValidDataLength (0),
            m_iBlockSerialNumber (-1) {
                m_chBuffer = (uint8_t *) malloc (SINGLE_BLOCK_DATA_SIZE);
                memset (m_chBuffer, 0, SINGLE_BLOCK_DATA_SIZE);
    }
    
    ModelDiskBufferManagement::~ModelDiskBufferManagement () {

        if (m_chBuffer != NULL) {
            free (m_chBuffer);
            m_chBuffer = NULL;
        }
    }

    /**
     * 说明：判断缓冲区状态
     * 返回值：缓冲区状态
     * 更新时间：2016/1/29*/
    IS_FULL ModelDiskBufferManagement::getBufferStatus () {
        return m_fStatusFlag;
    }

    /**
     * 说明：添加数据
     * 参数：新数据，新数据长度，溢出数据，溢出长度
     * 返回值：是否操作成功
     * 更新时间：2016/1/29*/
    bool ModelDiskBufferManagement::mergeData (const uint8_t *pNewBufIn, const uint32_t iLengthIn, uint8_t *&pBufOut, uint32_t &iLengthOut, uint32_t iPhysicalBlockNumber) {

//        //准备工作
//        uint32_t iLackLength = SINGLE_BLOCK_DATA_SIZE - m_iValidDataLength;  //所需长度
//
//        if (iLackLength > iLengthIn) {
//            iLengthOut = 0;
//
//            //填充缓冲区
//            memcpy (m_chBuffer + m_iValidDataLength, pNewBufIn, iLengthIn);
//            m_iValidDataLength += iLengthIn;
//        }else {
//
//            iLengthOut = iLengthIn - iLackLength;                  //剩余长度
//
//            //填充缓冲区
//            memcpy (m_chBuffer + m_iValidDataLength, pNewBufIn, iLackLength);
//
//            //剩余量准备溢出
//            pBufOut = (uint8_t *) malloc (iLengthOut * sizeof (uint8_t));  //外部释放内存
//            memset (pBufOut, 0, iLengthOut);
//            memcpy (pBufOut, pNewBufIn+iLackLength, iLengthOut);
//            m_iValidDataLength += iLackLength;
//        }
//
//        /*更新缓冲区状态*/
//        if (m_iValidDataLength == SINGLE_BLOCK_DATA_SIZE) {
//
//            /*将缓冲区中数据写入*/
//            Block *pBufBlock = new Block ();
//            pBufBlock->putValidData (m_chBuffer, m_iValidDataLength);
//            m_objDiskSimulator->updateBlock(iPhysicalBlockNumber, pBufBlock);
//            delete pBufBlock;
//            pBufBlock = NULL;
//            this->clearBuffer ();
//            m_fStatusFlag = EMPTY;
//
//        }else if (m_iValidDataLength < SINGLE_BLOCK_DATA_SIZE && m_iValidDataLength > 0) {
//            m_fStatusFlag = N_FULL;
//        }
//
        return true;
    }

    /**
     * 说明：清空缓冲区
     * 返回值：是否操作成功
     * 更新时间：2016/1/29*/
    bool ModelDiskBufferManagement::clearBuffer () {

//        memset (m_chBuffer, 0, SINGLE_BLOCK_DATA_SIZE);
//        m_iValidDataLength = 0;

        return true;
    }

    /**
     * 说明：获取缓冲区中整块数据
     * 参数：接收缓冲区数据容器，缓冲区中有效数据量
     * 返回值：是否操作成功
     * 更新时间：2016/1/29*/
    bool ModelDiskBufferManagement::getBufferBlockData (uint8_t *&pBufOut, uint32_t &iLengthOut) {

//        pBufOut = (uint8_t *) malloc (SINGLE_BLOCK_DATA_SIZE);  //在外部释放内存
//        memset (pBufOut, 0, SINGLE_BLOCK_DATA_SIZE);
//        memcpy (pBufOut, m_chBuffer, SINGLE_BLOCK_DATA_SIZE);

        return true;
    }

    /**
     * 说明：获取操作逻辑块号
     * 返回值：操作物理块号
     * 更新时间：2016/1/29*/
    uint32_t ModelDiskBufferManagement::getActiveLogicalBlockSerialNumber () {
        return m_iBlockSerialNumber;
    }
    
    /**
     * 说明：获取缓冲区中当前数据量
     * 返回值：当前数据量
     * 更新时间：2016/1/29*/
    uint32_t ModelDiskBufferManagement::getDataLength () {
        return m_iValidDataLength;
    }

    /**
     * 说明：设置缓冲区活动逻辑块号
     * 参数：逻辑块号
     * 返回值：是否设置成功
     * 更新时间：2016/1/29*/
    bool ModelDiskBufferManagement::setActivelogicalBlockSerialNum (uint32_t iLogicalSerialNum) {
        m_iBlockSerialNumber = iLogicalSerialNum;
        return true;
    }

    /**
     * 说明:放入整块尾块数据
     * 参数：尾块
     * 返回值：是否操作成功
     * 更新时间：2016/1/29*/
    bool ModelDiskBufferManagement::putLastBlock (const Block *pLastBlockIn) {

//        memcpy (m_chBuffer, const_cast <Block *> (pLastBlockIn)->getValidData (), const_cast <Block *> (pLastBlockIn)->getBlockLength ());
//        m_iValidDataLength = const_cast <Block *> (pLastBlockIn)->getBlockLength ();
//
//        if (m_iValidDataLength == 0|| m_chBuffer == NULL) {
//            return false;
//        }
//
//        if (m_iValidDataLength < SINGLE_BLOCK_DATA_SIZE && m_iValidDataLength > 0) {
//            m_fStatusFlag = N_FULL;
//        }
//
//        if (m_iValidDataLength == SINGLE_BLOCK_DATA_SIZE) {
//            m_fStatusFlag = FULL;
//        }
//
//        if (m_iValidDataLength == 0) {
//            m_fStatusFlag = EMPTY;
//        }

        return true;
    }

    /**
     * 说明：缓冲区数据写入文件
     * 参数：当前物理块号
     * 返回值：是否写入成功
     * 更新时间：2016/1/29*/
    bool ModelDiskBufferManagement::writeBufIn (uint32_t iActiveBlockNumber) {

//        /*将缓冲区中数据写入*/
//        Block *pBufBlock = new Block ();
//        pBufBlock->clearBlock ();
//        pBufBlock->putValidData (m_chBuffer, m_iValidDataLength);
//        m_objDiskSimulator->updateBlock(iActiveBlockNumber, pBufBlock);
//
//        /*清空缓存区*/
//        this->clearBuffer ();
//        m_fStatusFlag = EMPTY;
//
//        /*释放资源*/
//        delete pBufBlock;
//        pBufBlock = NULL;
        return true;
    }

    /**
     * 说明：获取缓冲块
     * 返回值：缓冲块
     * 更新时间：2016/1/29*/
    const
    Block *ModelDiskBufferManagement::getBufDataBlock () {

//        /*准备工作*/
//        Block *pBlock = new Block ();
//
//        /*封装缓冲块*/
//        pBlock->putValidData (m_chBuffer, m_iValidDataLength);
//
//        /*返回缓冲块*/
//        if (m_iValidDataLength == 0){
//            return NULL;
//        }else{
//            return pBlock;
//        }

    }
}
