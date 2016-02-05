#ifndef _INCLUDE_USER_INTER_FACE_COMMAND_RECIVER_H_
#define _INCLUDE_USER_INTER_FACE_COMMAND_RECIVER_H_

#include <stdlib.h>
#include <stdint.h>

namespace NS_DataIndex {

    /**
     * 说明：命令管理
     * 创建人：林宇斌
     * 更新时间：2016/2/5*/
    class CommandReciver {

    public:
        explicit
        CommandReciver ();
        ~CommandReciver ();

    public:
        /**
         * 说明：运行命令
         * 函数名称：runCommand
         * 输入参数：字符串，字符串长度
         * 返回值：uint32_t 【-1:命令格式有误】【0:系统内部问题】【1:运行成功】
         * 更新时间：2016/2/5*/
        uint32_t runCommand (const uint8_t *pBufIn, int iLengthIn);

        /**
         * 说明：命令执行
         * 函数名称：executeCommand
         * 输入参数：命令
         * 返回值：uint32_t 【-1:命令执行失败】【1:执行成功】
         * 更新时间：2016/2/5*/
        uint32_t executeCommand (const char *pCommandIn);

    private:
        /**
         * 说明：命令解析
         * 函数名称：parseCommand
         * 输入参数：字符串
         * 返回值：uint32_t 【-1:命令格式有误】【0:系统内部问题】【1:解析成功】
         * 更新时间：2016/2/5*/
        uint32_t parseCommand (const char *pBufIn);
    };
}




#endif /* _INCLUDE_USER_INTER_FACE_COMMAND_RECIVER_H_ */
