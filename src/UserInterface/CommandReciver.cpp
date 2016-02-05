#include "../../include/UserInterface/CommandReciver.h"

namespace NS_DataIndex {

    CommandReciver::CommandReciver () {

    }

    CommandReciver::~CommandReciver () {

    }

    /**
     * 说明：运行命令
     * 函数名称：runCommand
     * 输入参数：字符串，字符串长度
     * 返回值：uint32_t 【-1:命令格式有误】【0:系统内部问题】【1:运行成功】
     * 更新时间：2016/2/5*/
    uint32_t CommandReciver::runCommand (const uint8_t *pBufIn, int iLengthIn) {
        return 0;
    }

    /**
     * 说明：命令执行
     * 函数名称：executeCommand
     * 输入参数：命令
     * 返回值：uint32_t 【-1:命令执行失败】【1:执行成功】
     * 更新时间：2016/2/5*/
    uint32_t CommandReciver::executeCommand (const char *pCommandIn) {
        return 0;
    }

    /**
     * 说明：命令解析
     * 函数名称：parseCommand
     * 输入参数：字符串
     * 返回值：uint32_t 【-1:命令格式有误】【0:系统内部问题】【1:解析成功】
     * 更新时间：2016/2/5*/
    uint32_t CommandReciver::parseCommand (const char *pBufIn) {
        return 0;
    }
}
