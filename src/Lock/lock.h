#ifndef _INTERFACE_LOCK_H_
#define _INTERFACE_LOCK_H_

namespace NS_DataIndex {

    /**
     * 说明：锁接口
     * 创建人：蔡曜镫
     * 更新时间：2016/1/29*/
     class Lock {
     public:

        Lock () {}

        virtual
        ~Lock () {}

        /**
         * 说明：加锁
         * 参数：无
         * 返回值：是否加锁成功
         * 更新时间：2016/1/29*/
         virtual
         bool lockUp () = 0;

        /**
         * 说明：解锁
         * 参数：无
         * 返回值：是否解锁成功
         * 更新时间：2016/1/29*/
         virtual
         bool unLock () = 0;
     } ;

}

#endif