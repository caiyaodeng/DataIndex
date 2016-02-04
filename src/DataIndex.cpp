/*************************************************************************
	> File Name: DataIndex.cpp
	> Author:蔡曜镫
	> Mail:caiyaodeng@gmail.com 
	> Created Time: Sat 30 Jan 2016 02:41:27 AM EST
 ************************************************************************/

#include <iostream>
#include "../include/Entity/EntityCustomTableProperty.h"
#include "../include/Entity/EntityCustomDataType.h"
using namespace std;

int main () {
    NS_DataIndex::CustomDataType *CustomDataType = new NS_DataIndex::CustomDataType();
    NS_DataIndex::CustomDataType *CustomDataTypeNew = new NS_DataIndex::CustomDataType();
    NS_DataIndex::CustomTableProperty *CustomTableProperty = new NS_DataIndex::CustomTableProperty();
    CustomDataType->setRepresentationType((uint8_t*)"int", (uint32_t)4);
    CustomTableProperty->setCustomDataType(CustomDataType);
    CustomDataTypeNew = CustomTableProperty->getCustomDataType();
    NS_DataIndex::EntityTypeValue *obj = new NS_DataIndex::EntityTypeValue();
    NS_DataIndex::EntityTypeValue *objNew = new NS_DataIndex::EntityTypeValue();

//    obj->m_int = 3;
//    obj->m_is = true;
    obj->m_pStr = (uint8_t*)"ss";
//    obj->m_unchar = (uint8_t)'m';
    CustomTableProperty->setEntityTypeValue(obj); objNew = CustomTableProperty->getEntityTypeValue();
    cout << "---------启动成功!--------" << endl;
    return 1;
}

