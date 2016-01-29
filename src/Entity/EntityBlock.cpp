#include "../../include/Entity/EntityBlock.h"

namespace NS_DataIndex {

    Block::Block ()
        :
            m_bBuffer (0),
            m_bsLength (0) {
                m_bBuffer = (uint8_t *) malloc (SINGLE_BLOCK_DATA_SIZE);
                memset (m_bBuffer, 0, SINGLE_BLOCK_DATA_SIZE);
    }

    Block::~Block () {
        if (m_bBuffer != 0) {
            free (m_bBuffer);
            m_bBuffer = NULL;
        }
    }

    /**
     * 说明：直接将整块数据放入本块中
     * 参数：整块数据
     * 返回值：是否成功
     * 更新时间：2016/1/29*/
    bool Block::putEnBlocData (const uint8_t *pBuf) {

//        ModelParameter *objModelParameter = new ModelParameter ();

        /*获取有效数据量*/
//        memcpy (objModelParameter->chNum, pBuf, 4);
//        m_bsLength = objModelParameter->iNum;

        /*获取有效数据*/
//        memcpy (m_bBuffer, pBuf+8, m_bsLength);

        /*释放资源*/
//        delete objModelParameter;
//        objModelParameter  = NULL;

        /*操作有效性验证*/
//        if (m_bsLength==-1 || m_bBuffer==NULL){
//            return false;
//        }
        return true;
    }

    /**
     * 说明：将有效数据放入本块中
     * 参数：有效数据，数据量
     * 返回值：是否成功
     * 更新时间：2016/1/29*/
    bool Block::putValidData (const uint8_t *pBuf,const uint32_t blockLength) {

//        //将数据放入本块中
//        m_bsLength = blockLength;
//        memcpy (m_bBuffer, pBuf, m_bsLength);
//
//        //操作有效性验证
//        if (m_bsLength == 0 || m_bBuffer == NULL) {
//            return false;
//        }
        return true;
    }
    
    /**
     * 说明：获取本块中有效数据量
     * 参数：无
     * 返回值：有效数据量
     * 更新时间：2016/1/29*/
    uint32_t Block::getBlockLength () {
        return m_bsLength;
    }

    /**
     * 说明：获取本块中有效数据
     * 参数：无
     * 返回值：有效数据
     * 更新时间：2016/1/29*/
    uint8_t *Block::getValidData () {

//        uint8_t *pBuffer = (uint8_t *) malloc (m_bsLength * sizeof (uint8_t));
//
//        memcpy (pBuffer, m_bBuffer, m_bsLength);
//
//        /*操作有效性验证*/
//        if (m_bsLength == 0) {
//            return NULL;
//        }
//        return pBuffer;
        return 0;
    }
    
    /**
     * 说明：重置本块
     * 参数：无
     * 返回值：是否重置成功
     * 更新时间：2016/1/29*/
    bool Block::clearBlock () {

//        memset (m_bBuffer, 0, SINGLE_BLOCK_DATA_SIZE);
//        m_bsLength = -1;
//
//        if (m_bsLength != 0) {
//            return false;
//        }
        return true;
    }

    /**
     * 说明：计算数据余量
     * 参数：数据长度
     * 返回值：余量
     * 更新时间：2016/1/29*/
    uint32_t Block::isOver (uint32_t iTotalLength) {

//        while (iTotalLength >= SINGLE_BLOCK_DATA_SIZE){
//            iTotalLength -= SINGLE_BLOCK_DATA_SIZE;
//        }
//        return iTotalLength;
        return 0;
    }
}
