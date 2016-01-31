#ifndef _INTERFACE_DISK_SIMULATOR_H_
#define _INTERFACE_DISK_SIMULATOR_H_

#ifdef __cplusplus
extern "C" {
#endif


namespace NS_DataIndex {
    
    /**
     * 说明：磁盘接口
     * 创建人:蔡曜镫
     * 更新时间：2016/1/29*/
    virtual
    class DiskSimulator {
    public:

        DiskSimulator (){}

        virtual
        ~DiskSimulator (){}

        /**
        说明：块更新
        参数：块编号，更新块
        返回值：是否更新成功
        更新时间：2016/1/29*/
        virtual
        bool updateBlock (const BLOCK_SERIAL_NUM iStartBlockIn, const Block *objBlockIn) = 0;

        /**
        说明：块还原
        参数：块编号，还原的块
        返回值：是否更新成功
        更新时间：2016/1/29*/
        virtual
        bool loadBlock (const BLOCK_SERIAL_NUM iStartBlockIn, Block *&objBlockOut) = 0;
    };

}

#ifdef __cplusplus
}
#endif

#endif
