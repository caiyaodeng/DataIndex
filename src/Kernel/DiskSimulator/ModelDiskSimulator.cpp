#include "../../../include/Kernel/DiskSimulator/ModelDiskSimulator.h"

namespace NS_DataIndex {

    ModelDiskSimulator::ModelDiskSimulator ()
        :
            m_DiskName (0),
            m_objModelParameter (0) {
                m_DiskName = (uint8_t *) malloc (DISK_NAME_LENGTH);
                memset (m_DiskName, 0, DISK_NAME_LENGTH);
                memcpy (m_DiskName, const_cast <char *>("DataBase.dbv"), DISK_NAME_LENGTH);
                m_objModelParameter = new ModelParameter ();
                m_File = fopen ((char *)m_DiskName, "rb+");

        if (m_File == 0){
            std::cout << "sd" << std::endl;
        }
    }

    ModelDiskSimulator::~ModelDiskSimulator (){

        if (m_DiskName != 0){
            free (m_DiskName);
            m_DiskName = NULL;
        }

        if (m_objModelParameter != 0){
            delete m_objModelParameter;
            m_objModelParameter = NULL;
        }

        if (m_File != NULL){
            fclose (m_File);
        }
    }

    /**
     * 说明：内部写入
     * 参数：单块
     * 返回值：是否写入成功
     * 更新时间：2016/1/29*/
    bool ModelDiskSimulator::writeBlock (const Block *pBlockIn) {

//        uint8_t *pBuf = NULL;
//        B_SIZE iLength = -1;
//        int iReal = -1;
//
//        /*获取有效数据长度*/
//        iLength = const_cast <Block *>(pBlockIn)->getBlockLength ();
//        if (iLength == -1){
//            return false;
//        }
//
//        /*分配内存*/
//        pBuf = (uint8_t *) malloc (SINGLE_BLOCK_SIZE*sizeof (uint8_t));
//        memset (pBuf, 0, iLength * sizeof (uint8_t));
//
//        /*添加有效数据量*/
//        m_objModelParameter->iNum = iLength;
//        memcpy (pBuf, m_objModelParameter->chNum, 4);
//
//        /*添加next指针*/
//
//        /*添加有效数据*/
//        memcpy (pBuf+8, const_cast <Block *>(pBlockIn)->getValidData (), iLength);
//
//        /*将块写入*/
//        iReal = fwrite (reinterpret_cast <const char *> (pBuf), 1, SINGLE_BLOCK_SIZE, m_File);
//        if (iReal != SINGLE_BLOCK_SIZE){
//            free (pBuf);
//            pBuf = NULL;
//            return false;
//        }
//
//        /*释放资源*/
//        free (pBuf);
//        pBuf = NULL;
        return true;
    }
    
    /**
     * 说明：内部读取
     * 参数：单块
     * 返回值：是否读取成功
     * 更新时间：2016/1/29*/
    bool ModelDiskSimulator::readBlock (Block *&pBlockOut) {

//        uint8_t *pBuf = (uint8_t *)malloc (SINGLE_BLOCK_SIZE);
//        memset (pBuf, 0, SINGLE_BLOCK_SIZE);
//        bool isSuccessed = false;
//        int iReal = -1;
//
//        /*读取块*/
//        iReal = fread (reinterpret_cast <char *> (pBuf), 1, SINGLE_BLOCK_SIZE, m_File);
//        if (iReal != SINGLE_BLOCK_SIZE){
//            free (pBuf);
//            pBuf = NULL;
//            return false;
//        }
//
//        /*载入整块数据*/
//        isSuccessed = pBlockOut->putEnBlocData (pBuf);
//
//        /*释放资源*/
//        free (pBuf);
//        pBuf = NULL;
//        return isSuccessed;
        return true;
    }

    /**
     * 说明：写指针位置更新
     * 参数：偏移量
     * 返回值：是否移动成功
     * 更新时间：2016/1/29*/
    bool ModelDiskSimulator::moveInputSeek (const OFFSET iOffsetIn) {
        int isSuccessed = 0;
        isSuccessed = fseek (m_File, iOffsetIn, SEEK_SET);
        if (isSuccessed != 0){
            return false;
        }
        return true;
    }

    /**
     * 说明：读取指针位置更新
     * 参数：偏移量
     * 返回值：是否移动成功
     * 更新时间：2016/1/29*/
    bool ModelDiskSimulator::moveOutputSeek (const OFFSET iOffsetIn) {
//        int isSuccessed = 0;
//        isSuccessed = fseek (m_File, iOffsetIn, SEEK_SET);
//        if (isSuccessed != 0){
//            return false;
//        }
        return true;
    }

    /**
     * 说明：块更新
     * 参数：块编号，更新块
     * 返回值：是否更新成功
     * 更新时间：2016/1/29*/
    bool ModelDiskSimulator::updateBlock (const uint32_t iStartBlockIn, const Block *objBlockIn) {

//        bool isSuccessed = false;
//
//        /*有效性判断*/
//        if (iStartBlockIn < 0){
//            return false;
//        }
//
//        /*移动写指针*/
//        isSuccessed = this->moveOutputSeek (iStartBlockIn*SINGLE_BLOCK_SIZE);
//
//        /*块写入*/
//        isSuccessed = writeBlock (objBlockIn);
//
//        //const_cast <Block *> (objBlockIn)->clearBlock ();
//
//        //isSuccessed = this->moveInputSeek ((iStartBlockIn)*SINGLE_BLOCK_SIZE);
//        //this->readBlock ( const_cast <Block *&> (objBlockIn));
//
//        return isSuccessed;
        return true;
    }
    
    /**
     * 说明：块读取
     * 参数：块编号，读取的块
     * 返回值：是否读取成功
     * 更新时间：2016/1/29*/
    bool ModelDiskSimulator::loadBlock (const uint32_t iStartBlockIn, Block *&objBlockOut) {

//        bool isSuccessed = false;
//
//        /*有效性判断*/
//        if (iStartBlockIn < 0){
//            return false;
//        }
//
//        /*移动读指针*/
//        isSuccessed = this->moveInputSeek (iStartBlockIn*SINGLE_BLOCK_SIZE);
//
//        /*块读取*/
//        isSuccessed = readBlock (objBlockOut);
//
//        return isSuccessed;
        return true;
    }
}
