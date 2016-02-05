#ifndef _INCLUDE_USER_INTER_FACE_DATA_RECIVER_H_
#define _INCLUDE_USER_INTER_FACE_DATA_RECIVER_H_

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
namespace NS_DataIndex {

    /**
     * 说明：数据管理
     * 创建人：林宇斌
     * 更新时间：2016/2/5*/
    class DataReciver {

        /*方括号类*/
        class SquareBrackets {

        public:
            uint32_t m_iLen;
            uint8_t *m_pBuf;
        };

        /*圆括号类*/
        class Parentheses {

        public:
            uint32_t m_iLen;
            uint8_t *m_pBuf;
        };

        SquareBrackets *objSquareBrackets;          //圆括号对象
        Parentheses *objParentheses;                //方括号对象

    public:
        explicit
        DataReciver ();
        ~DataReciver ();

    public:
        /**
         * 说明：建表
         * 函数名称:addTable
         * 输入参数；字符串，字符串长度
         * 说明:例，（表名）（属性名1【属性类型1】）（属性名2【属性类型2】）.。。。。。。。。。。。
         * 返回值：uint_32
         * 说明：【-1输入参数格式有误】【0系统内部空间不够】
         * 更新时间：2016/2/5*/
        uint32_t addTable (const uint8_t *pBufIn, int iLength);

        /**
         * 说明：查询所有表操作
         * 函数名称：quaryTables
         * 输入参数：无
         * 返回值：字符串
         * 说明：（数量）（表1名【属性名1:属性类型1】。。。。）（表2名【属性名1:属性类型1】…..）
         * 更新时间：2016/2/5*/
        const
        uint8_t *quaryTables ();

        /**
         * 说明：查询数据操作
         * 函数名称：select
         * 输入参数：字符串，字符串长度
         * 说明：【表名】【属性1】【值1】
         * 返回值：字符串
         * 说明：【属性1:值1】【属性2:值2】。。。。
         * 更新时间：2016/2/5*/
        const
        uint8_t *select (const uint8_t *pBufIn, int iLengthIn);

        /**
         * 说明：插入数据操作
         * 函数名称：insert
         * 输入参数：字符串，字符串长度
         * 说明：（【表名】）（【属性1值】【属性2值】【属性3值】。。。）
         * 返回值：uint32_t
         * 说明：【-1：输入参数格式有误】【0:系统内部问题】
         * 更新时间：2016/2/5*/
        uint32_t insert (const uint8_t *pBufIn, int iLengthIn);

        /**
         * 说明：删除数据操作
         * 函数名称：deleteData
         * 输入参数：字符串，字符串长度
         * 说明：（【表名】）（【属性名】【属性值】）
         * 返回值：uint32_t
         * 说明：【-1：输入参数格式有误】【0:系统内部问题】
         * 更新时间：2016/2/5*/
        uint32_t deleteData (const uint8_t *pBufIn, int iLengthIn);

        /**
         * 说明：更新数据操作
         * 函数名称：update
         * 输入参数：字符串，字符串长度
         * 说明：（【属性1值】【属性2值】【属性3值】。。。。。）（【表名】【属性1】【属性1值】）
         * 返回值：uint32_t 【-1:输入格式有误】【0:系统内部问题】【1:更新成功】
         * 更新时间：2016/2/5*/
        uint32_t update (const uint8_t *pBufIn, int iLengthIn);

        /**
         * 说明：删除表操作
         * 函数名称：deleteTable
         * 输入参数：【表名】，字符串长度
         * 返回值：uint32_t 【-1:输入格式有误】【0:系统内部问题】【1:删除成功】
         * 更新时间：2016/2/5*/
        uint32_t deleteTable (const uint8_t *ptableNameIn, int iLengthIn);

    private:
        /**
         * 说明：解析方括号
         * 函数说明：parseSquareBracketsProperty
         * 输入参数：字符串，方括号数组（引用传入）
         * 返回值：uint8_t 数组大小
         * 更新时间：2016/2/5*/
        uint32_t parseSquareBracketsProperty (const uint8_t *pBufIn, uint32_t *&iSquareBracketsSetOut);

        /**
         * 说明解析圆括号
         * 函数说明：parseParenthesesProperty
         * 输入参数：字符串，圆括号数组（引用传入）
         * 返回值：uint8_t 数组大小
         * 更新时间：2016/2/5*/
        uint32_t parseParenthesesProperty (const uint8_t *pBufIn, uint32_t *&iParenthesesSetOut);
    };
}

#endif /* _INCLUDE_USER_INTER_FACE_DATA_RECIVER_H_ */
