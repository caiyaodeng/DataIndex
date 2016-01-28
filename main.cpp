#include <iostream>
#include <stdint.h>
#include "EntityDataTypeStructure.h"
#include "EntityAllDataTypeSet.h"
#include "EntityDataTypeInformation.h"
#include "EntityTableSpace.h"
#include "EntityAllTableSet.h"
#include "EntitySingleTablePropertyStructure.h"
#include "EntityMyTableProperty.h"
#include "EntityMyDataType.h"
using namespace std;

int main(){
        NS_DataIndex::MyDataType *objMyDataType = new NS_DataIndex::MyDataType();

        uint8_t *Dname3;
        objMyDataType->setTypeName((uint8_t *)"Ion");

        Dname3 = (uint8_t*)objMyDataType->getTypeName();
        cout<< Dname3 <<"   "<<endl;

        return 0;


}
