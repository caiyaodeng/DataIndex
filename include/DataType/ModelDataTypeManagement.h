#ifndef _INCLUDE_DATA_TYPE_MODEL_DATA_TYPE_MANAGEMENT_H_
#define _INCLUDE_DATA_TYPE_MODEL_DATA_TYPE_MANAGEMENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "../Extend/B+tree/EntityIndexManagement.h"
#include "../Entity/EntitySingleDataIndexEntrySet.h"

namespace NS_DataIndex {

    /**
     * 说明：数据类型管理
     * 创建人：林宇斌
     * 更新时间：2016/1/30*/
    class DataTypeManagement {
         uint32_t m_iExpandBlockNum;                                //当前扩充块数
         uint32_t m_iDataTypeNum;                                   //数据类型数量
         BlockSerialNumEntryNode *m_pHeadBlockSerialNumEntry;       //B+树管理对象
         SingleDataIndexEntryNode *m_pHeadSingleDataIndexEntry;     //索引分区项对象

         /**
          * 说明：递归释放本对象
          * 参数：索引分区对象节点
          * 更新时间：2016/1/30*/
         void recursiveReleaseBlockSerialNumMemory (BlockSerialNumEntryNode *pNode);

         /**
          * 说明：递归释放本对象
          * 参数：索引分区对象节点
          * 更新时间：2016/1/30*/
         void recursiveReleaseSingleDataIndexMemory (SingleDataIndexEntryNode *pNode);

     public:
         DataTypeManagement ();
         ~DataTypeManagement ();

     public:

         /**
          * 说明：设置当前扩充块数
          * 参数：当前扩充块数
          * 返回值：是否设置成功
          * 更新时间：2016/1/30*/
         bool setExpandBlockNumber (uint32_t iExpandBlockNum);

         /**
          * 说明：设置数据类型数量
          * 参数：数据类型数量
          * 返回值：是否设置成功
          * 更新时间：2016/1/30*/
         bool setDataTypeNumber (uint32_t iDataTypeNum);

         /**
          * 说明：获取当前扩充块数
          * 返回值：当前扩充块数
          * 更新时间：2016/1/30*/
         uint32_t getExpandBlockNumber ();

         /**
          * 说明：获取数据类型数量
          * 返回值：数据类型数量
          * 更新时间：2016/1/30*/
         uint32_t getsetDataTypeNumber ();

         /**
          * 说明：新增一个B+树对象
          * 参数：新增一个B+树对象
          * 返回值：是否增加成功
          * 更新时间：2016/1/30*/
         bool addBlockSerialNumEntry (const SingleDataIndexEntryNode *pBlockSerialNumEntryNodeIn);

         /**
          * 说明：查询B+树对象
          * 参数：块编号
          * 返回值：B+树对象
          * 更新时间：2016/1/30*/
         const
         BlockSerialNumEntry *quaryBlockSerialNumEntry (uint32_t iBlockSerialNumIn);

         /**
          * 说明：新增一个索引分区对象
          * 参数：新增的索引分区对象
          * 返回值：是否增加成功
          * 更新时间：2016/1/30*/
         bool addSingleDataIndexEntry (const SingleDataIndexEntryNode *pSingleDataIndexEntryNodeIn);

         /**
          * 说明：查询索引分区对象
          * 参数：数据类型标志位，标志位长度
          * 返回值：索引分区对象
          * 更新时间：2016/1/30*/
         const
         DataIndexEntry *quarySingleDataIndexEntry (const uint8_t *pFlagIn, uint32_t iFlagLengthIn);
     };

}

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_DATATYPE_MODELDATATYPEMANAGEMENT_H_ */
