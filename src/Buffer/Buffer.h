#ifndef _INTERFACE_BUFFER_H_
#define _INTERFACE_BUFFER_H_

namespace NS_DataIndex {

    /**
    说明:磁盘缓冲区接口
    创建人：蔡曜镫
    更新时间：2016/1/29*/
    class Buffer {
    public:

        Buffer () {};

        virtual
        ~Buffer () {};

    public:
        /**
        说明：判断缓冲区状态
        返回值：缓冲区状态
        更新时间：2016/1/29*/
        virtual
        IS_FULL getBufferStatus () = 0;

        /**
        说明：添加数据
        参数：新数据， 新数据长度，溢出数据，溢出长度,物理块号
        返回值：是否操作成功
        更新时间：2016/1/29*/
        virtual
        bool mergeData(const BYTE *pNewBufIn, const B_SIZE iLengthIn, BYTE *&pBufOut, B_SIZE &iLengthOut, BLOCK_SERIAL_NUM iPhysicalBlockNumber) = 0;

        /**
        说明：清空缓冲区
        返回值：是否操作成功
        更新时间：2016/1/29*/
        virtual
        bool clearBuffer () = 0;

        /**
        说明：获取缓冲区中整块数据
        参数：接收缓冲区数据容器，缓冲区中有效数据量
        返回值：是否操作成功
        更新时间：2016/1/29*/
        virtual
        bool getBufferBlockData (BYTE *&pBufOut, B_SIZE &iLengthOut) = 0;

        /**
        说明：获取操作逻辑块号
        返回值：操作物理块号
        更新时间：2016/1/29*/
        virtual
        BLOCK_SERIAL_NUM getActiveLogicalBlockSerialNumber () = 0;

        /**
        说明：获取缓冲区中当前数据量
        返回值：当前数据量
        更新时间：2016/1/29*/
        virtual
        B_SIZE getDataLength () = 0;

        /**
        说明：设置缓冲区活动逻辑块号
        参数：逻辑块号
        返回值：是否设置成功
        更新时间：2016/1/29*/
        virtual
        bool setActivelogicalBlockSerialNum (BLOCK_SERIAL_NUM iLogicalSerialNum) = 0;

        /**
        说明:放入整块尾块数据
        参数：尾块
        返回值：是否操作成功
        更新时间：2016/1/29*/
        virtual
        bool putLastBlock (const Block *pLastBlockIn) = 0;

        /**
        说明：缓冲区数据写入文件
        参数：当前物理块号
        返回值：是否写入成功
        更新时间：2016/1/29*/
        virtual
        bool writeBufIn(BLOCK_SERIAL_NUM iActiveBlockNumber) = 0;

        /**
        说明：获取缓冲块
        返回值：缓冲块
        更新时间：2016/1/29*/
        virtual
        const
        Block *getBufDataBlock () = 0;
    };
}

#endif