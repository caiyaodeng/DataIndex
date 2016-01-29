#ifndef _ENTITY_BLOCK_H_
#define _ENTITY_BLOCK_H_

/*块常量定义*/
#define SINGLE_BLOCK_SIZE                    16777216   //单块大小
#define SINGLE_BLOCK_DATA_SIZE               16777088   //单块有效数据区大小
#define SINGLE_BLOCK_HEAD_TOTAL_SIZE         128        //单块块头总大小
#define SINGLE_BLOCK_HEAD_DATA_LENGTH_SIZE   8          //单块有效数据量字段大小
#define SINGLE_BLOCK_HEAD_NEXT_SIZE          8          //单块上块溢出量大小

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "../Kernel/ConfigDefault.h"

namespace NS_DataIndex {

    /**
     * 说明:块
     * 创建人：蔡曜镫
     * 更新时间：2016/1/29*/
    class Block {

        uint8_t *m_bBuffer;
        uint32_t m_bsLength;

    public:
        explicit
        Block ();
        ~Block ();

    public:
        /**
         * 说明：直接将整块数据放入本块中
         * 参数：整块数据
         * 返回值：是否成功
         * 更新时间：2016/1/29*/
        bool putEnBlocData (const uint8_t *pBufIn);

        /**
         * 说明：将有效数据放入本块中
         * 参数：有效数据，数据量
         * 返回值：是否成功
         * 更新时间：2016/1/29*/
        bool putValidData (const uint8_t *pBufIn, const uint32_t blockLengthIn);

        /**
         * 说明：获取本块中有效数据量
         * 参数：无
         * 返回值：有效数据量
         * 更新时间：2016/1/29*/
        uint32_t getBlockLength ();

        /**
         * 说明：获取本块中有效数据
         * 参数：无
         * 返回值：有效数据
         * 更新时间：2016/1/29*/
        uint8_t *getValidData ();

        /**
         * 说明：重置本块
         * 参数：无
         * 返回值：是否重置成功
         * 更新时间：2016/1/29*/
        bool clearBlock ();

        /**
         * 说明：计算数据余量
         * 参数：数据长度
         * 返回值：余量
         * 更新时间：2016/1/29*/
        uint32_t isOver (uint32_t iTotalLength);
    };

}
#endif 
 
