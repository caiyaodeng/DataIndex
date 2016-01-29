#ifndef _CONFIG_DEFAULT_H_
#define _CONFIG_DEFAULT_H_

#include "stdlib.h"
#include "string.h"

/*引导区位置信息*/
#define S_P_ZORE_BLOCK                        0        //磁盘零块起始
#define S_P_BASIC_DISK_INFO                  128       //磁盘基础信息起始
#define E_P_BASIC_DISK_INFO                  16777214  //磁盘基础信息结束
#define S_P_PARTITON_NUM                     142       //分区表中分区数量起始
#define S_P_PATITION_TABLE                   432       //分区表起始
#define S_P_FILE_TABLE                       448       //文件分配表起始
#define E_P_FILE_TABLE                       2016      //文件分配表结束
#define S_P_PATITION_ONE_BOOT                2048      //位图起始
#define E_P_PATITION_ONE_BOOT                3072      //位图结束

/*类型定义*/
typedef int TIME_SLICE_SERIAL_NUM;//时间片序号类型
typedef char *FILE_NAME;          //文件名称类型
typedef unsigned char BYTE;       //文件内容  二进制数据
typedef int B_SIZE;               //块有效长度类型
typedef int PARTITION_IETM;       //分区表对象类型
typedef int BLOCK_SERIAL_NUM;     //块编号类型
typedef int BLOCK_NUM;            //块数量类型
typedef int SYS_SHORT_SIZE;       //系统短类型
typedef long long SYS_SIZE;       //系统容量大小类型
typedef int BIT_VALUE;            //位域值类型
typedef char *DISK_NAME;          //磁盘名称类型
typedef long long OFFSET;         //指针偏移量类型
typedef int COMPARE_TYPE;         //比较类型

/*磁盘常量定义*/
#define MASTER_BOOT_RECORD_END_FLAG          0xAAFF     //主引导记录结束标志
#define TOTAL_DISK_CAPACITY                  21474836480//磁盘总容量
#define SINGLE_PARTITON_TOTAL_SIZE           21474836346//单分区总大小
#define RETAIN_PATITION_TOTAL_SIZE           254        //保留区
#define TOTAL_PARTITION_TABLE_SIZE           16         //分区表总大小
#define SINGLE_PARTITION_TABLE_SIZE          8          //分区表项大小
#define FILE_ALLOCATION_FILE_NAME_LENGTH     10         //文件分配项中文件名称长度
#define DISK_NAME_LENGTH                     15         //磁盘名称长度
#define TOTAL_BLOCK_NUM                      5120       //总单块数
#define TOTAL_FIED_MAP_SIZE                  64         //位图所占字节数
#define BINARY_PARAMETER_SIZE                 4         //整型参数转成的二进制大小
#define BINARY_PARAMETER_LONG_SIZE            8         //长整型参数转成的二进制大小
#define BINARY_FILE_ALLOCTION_TABLE_ITEM_SIZE 130       //单文件分配表项转成的二进制数据大小
#define DIRCT_INDIX_BLOCK_NUM                11         //直接索引支持块个数
#define FIRST_INDEX_BLOCK_NUM               2097136     //524288            //一级索引支持块个数
#define SECOND_INDEX_BLOCK_NUM              2097136.0   //524288.0*524288.0   //二级索引支持块个数
#define THIRD_INDEX_BLOCK_NUM          2097136.0*2097136//三级索引支持块个数
#define THIRD_INDEX_BLOCK_MAX_NUM            35         //三级索引块中二级索引块地址的最大值
#define DATA_STORAGE_START_BLOCK_NUM         2          //存储数据的起始块号

/*操作码*/
#define READ_FILE_FALSE                      -1         //读取数据失败
#define GET_FREE_BLOCK_FALSE                 -1         //获取空闲块失败
#define GET_FILE_LENGTH_FALSE                -1         //文件长度读取失败
#define DISK_FIX_ADD                         true       //磁盘修改增加标志位
#define DISK_FIX_REDUCE                      false      //磁盘修改减少标志位

//#define FLAG_STATISTICAL_TIME_SLICE           1        //统计对象标志位
//#define FLAG_ASSOCIATION_TIME_SLICE           0        //关联对象标志位
enum TIME_SLICE_T {FLAG_STATISTICAL_TIME_SLICE = 1
    , FLAG_ASSOCIATION_TIME_SLICE = 0};

/*缓冲区已满标志*/
enum IS_FULL {FULL = 0, N_FULL = 1, EMPTY = -1};

/*物理索引换挡标志*/
enum DO_SHIFT {LEVEL_0 = -1, LEVEL_1 = 0, LEVEL_2 = 1, LEVEL_3 = 2};

/*短整型字符型转换模型*/
union ModelParameter {
    SYS_SHORT_SIZE iNum;
    BYTE chNum[4];
};

/*长整型字符型转换模型*/
union ModelLongParameter {
    SYS_SIZE dNum;
    BYTE chNum[8];
};



#endif
