#ifndef _MODEL_DISK_SIMULATOR_H_
#define _MODEL_DISK_SIMULATOR_H_

#include <fstream>
#include <string.h>
#include "iostream"
#include "../ConfigDefault.h"
#include "../../Entity/EntityBlock.h"

namespace NS_DataIndex {

    /**
     * 说明:磁盘模拟
     * 创建人：蔡曜镫
     * 更新时间：2016/1/29*/
    class ModelDiskSimulator {

        FILE *m_File;                             //输入输出流
        uint8_t *m_DiskName;                      //磁盘名称
        ModelParameter *m_objModelParameter;      //参数转换模型

    private:
        /**
         * 说明：内部写入
         * 参数：单块
         * 返回值：是否写入成功
         * 更新时间：2016/1/29*/
        bool writeBlock (const Block *pBlockIn);

        /**
         * 说明：内部读取
         * 参数：单块
         * 返回值：是否读取成功
         * 更新时间：2016/1/29*/
        bool readBlock (Block *&pBlockOut);

        /**
         * 说明：写入指针位置更新
         * 参数：偏移量
         * 返回值：是否移动成功
         * 更新时间：2016/1/29*/
        bool moveInputSeek (const OFFSET iOffsetIn);

        /**
         * 说明：读取指针位置更新
         * 参数：偏移量
         * 返回值：是否移动成功
         * 更新时间：2016/1/29*/
        bool moveOutputSeek (const OFFSET iOffsetIn);

    public:
        explicit
        ModelDiskSimulator ();
        ~ModelDiskSimulator ();

    public:
        /**
         * 说明：块更新
         * 参数：块编号，更新块
         * 返回值：是否更新成功
         * 更新时间：2016/1/29*/
        bool updateBlock (const uint32_t iStartBlockIn, const Block *objBlockIn);

        /**
         * 说明：块还原
         * 参数：块编号，还原的块
         * 返回值：是否更新成功
         * 更新时间：2016/1/29*/
        bool loadBlock (const uint32_t iStartBlockIn, Block *&objBlockOut);
    };
}
#endif
