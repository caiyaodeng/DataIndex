#ifndef _INTERFACE_FREE_SPACE_H_
#define _INTERFACE_FREE_SPACE_H_

namespace NS_DataIndex {

    /**
     * 说明:空闲空间管理口接口 
     * 创建人：蔡曜镫
     * 更新时间：2016/1/29*/
     virtual
     class FreeSpace {
     public:

        FreeSpace (){}

        virtual 
        ~FreeSpace (){}
        
        /**
         * 说明：申请空闲块
         * 参数：存储的数据长度，接收块数组
         * 返回值：申请成功的块数
         * 更新时间：2016/1/29*/
        virtual
        BLOCK_NUM getFreeBlock (const B_SIZE LengthIn, BLOCK_SERIAL_NUM *&iBlockSetOut) = 0;

        /**
         * 说明：释放空闲块
         * 参数：块数量，要释放的块数组
         * 返回值：是否释放成功
         * 更新时间：2016/1/29*/
        virtual
        bool returnBlock (const BLOCK_NUM iBlockIn, const BLOCK_NUM *iBlockSetIn) = 0;

        /**
         * 说明：获取已使用空闲块量
         * 参数：无
         * 返回值：已使用空闲块量
         * 更新时间：2016/1/29*/
        virtual
        SYS_SIZE getUsedBlockNum () = 0;

        /**
         * 说明：空闲块扩充
         * 参数：无
         * 返回值：扩充成功返回本次扩充量/失败返回-1
         * 更新时间：2016/1/29*/
        virtual
        BLOCK_NUM expandFreeSpace () = 0;

        /**
         * 说明：获取已扩充量
         * 参数：无
         * 返回值：已扩充量
         * 更新时间：2016/1/29*/
        virtual
        BLOCK_NUM getExtendedSpace () = 0;
     };

}


#endif