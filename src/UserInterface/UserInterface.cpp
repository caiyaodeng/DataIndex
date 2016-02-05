#include "../../include/UserInterface/UserInterface.h"

namespace NS_DataIndex {

    UserInterface::UserInterface ()
        :
        objCommandReciver (NULL),
        objDataReciver (NULL) {
            objCommandReciver = new CommandReciver ();
            objDataReciver = new DataReciver ();
    }

    UserInterface::~UserInterface () {
        if (objCommandReciver != NULL) {
            delete objCommandReciver;
            objCommandReciver = NULL;
        }

        if (objDataReciver != NULL) {
            delete objDataReciver;
            objDataReciver = NULL;
        }
    }

    /**
     * 说明：开启服务
     * 函数名称：start
     * 输入参数：无
     * 返回值：bool
     * 更新时间：2016/2/5*/
    bool UserInterface::start () {
        return true;
    }

    /**
     * 说明：关闭服务
     * 函数名称：stop
     * 输入参数：无
     * 返回值:bool
     * 更新时间：2016/2/5*/
    bool UserInterface::stop () {
        return true;
    }

    /**
     * 说明：建表
     * 函数名称:createTable
     * 输入参数；字符串 （string）
     * 说明:例，（表名）（属性名1【属性类型1】）（属性名2【属性类型2】）.。。。。。。。。。。。。
     * 返回值：uint_32
     * 说明：【-1输入参数格式有误】【0系统内部空间不够】【1成功】
     * 更新时间：2016/2/5*/
    uint32_t UserInterface::createTable (const char *pBufIn) {
        return 0;
    }

    /**
     * 说明：查询数据操作
     * 函数名称：quaryTables
     * 输入参数：无
     * 返回值：字符串
     * 说明：（数量）（表1名【属性名1:属性类型1】。。。。）（表2名【属性名1:属性类型1】…..）
     * 更新时间：2016/2/5*/
    const
    char *UserInterface::quaryTables () {
        return NULL;
    }

    /**
     * 说明：查询所有表操作
     * 函数名称：select
     * 输入参数：字符串
     * 说明：【表名】【属性1】【值1】
     * 返回值：字符串
     * 说明：【属性1:值1】【属性2:值2】。。。。
     * 更新时间：2016/2/5*/
    const
    char *UserInterface::select (const char *pBufIn) {
        return NULL;
    }

    /**
     * 插入数据操作
     * 函数名称：insert
     * 输入参数：字符串
     * 说明：（【表名】）（【属性1值】【属性2值】【属性3值】。。。）
     * 返回值：uint32_t
     * 说明：【-1：输入参数格式有误】【0:系统内部问题】【1：成功】
     * 更新时间：2016/2/5*/
    uint32_t UserInterface::insert (const char *pBufIn) {
        return 0;
    }

    /**
     * 说明：删除数据操作
     * 函数名称：deleteData
     * 输入参数：字符串
     * 说明：（【表名】）（【属性名】【属性值】）
     * 返回值：uint32_t
     * 说明：【-1：输入参数格式有误】【0:系统内部问题】【1：成功】
     * 更新时间：2016/2/5*/
    uint32_t UserInterface::deleteData (const char *pBufIn) {
        return 0;
    }

    /**
     * 说明：更新数据操作
     * 函数名称：update
     * 输入参数：字符串
     * 说明：（【属性1值】【属性2值】【属性3值】。。。。。）（【表名】【属性1】【属性1值】）
     * 返回值：uint32_t 【-1:输入格式有误】【0:系统内部问题】【1:更新成功】
     * 更新时间：2016/2/5*/
    uint32_t UserInterface::update (const char *pBufIn) {
        return 0;
    }

    /**
     * 说明：删除表操作
     * 函数名称：deleteTable
     * 输入参数：【表名】
     * 返回值：uint32_t 【-1:输入格式有误】【0:系统内部问题】【1:删除成功】
     * 更新时间：2016/2/5*/
    uint32_t UserInterface::deleteTable (const char *pTableNameIn) {
        return 0;
    }
}


