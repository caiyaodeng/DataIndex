#include <iostream>
#include <stdint.h>
#include "include/Entity/EntityDataTypeStructure.h"
#include "include/Entity/EntityDataTypeSet.h"
#include "include/Entity/EntitySingleDataTypeInformation.h"
#include "include/Entity/EntityTableSpace.h"
#include "include/Entity/EntityTableSet.h"
#include "include/Entity/EntitySingleTablePropertyStructure.h"
#include "include/Entity/EntityMyTableProperty.h"
#include "include/Entity/EntityMyDataType.h"
#include "include/Entity/EntitySingleDataIndexEntry.h"
#include "include/Entity/EntityDataIndexDataDocument.h"
#include "include/Entity/EntityTypeValue.h"
using namespace std;

template <typename T>
class CTest {
public:
    string m_strName;
    T m_tValue;
};

int main(){

        NS_DataIndex::DataTypeStructure *objDataTypeStructure = new NS_DataIndex::DataTypeStructure();
        NS_DataIndex::DataTypeSet *objDataTypeSet = new NS_DataIndex::DataTypeSet();
        NS_DataIndex::DataIndexDataDocument *objDataIndexDataDocument= new NS_DataIndex::DataIndexDataDocument();
        NS_DataIndex::SingleDataIndexEntry *objSingleDataIndexEntry = new NS_DataIndex::SingleDataIndexEntry();
        NS_DataIndex::SingleTablePropertyStructure *objSingleTablePropertyStructure = new NS_DataIndex::SingleTablePropertyStructure();
        NS_DataIndex::TableSet *objTableSet = new NS_DataIndex::TableSet();
        NS_DataIndex::TableSpace *objTableSpace = new NS_DataIndex::TableSpace();
        NS_DataIndex::MyDataType *objMyDataType = new NS_DataIndex::MyDataType();
        NS_DataIndex::SingleDataTypeInformation *objSingleDataTypeInformation = new NS_DataIndex::SingleDataTypeInformation();

        uint32_t a,b,c,d,f,g,h,k,l,m,n,o,p,r,s,t,u,v;
        uint8_t *Dname1,*Dname2,*Dname3;

        objDataTypeStructure->setDatabaseName((uint8_t *)"Ion1");
        Dname1 = (uint8_t*)objDataTypeStructure->getDatabaseName();
        objDataTypeStructure->setInitBlockNumber(1);
        a = objDataTypeStructure->getInitBlockNumber();
        objDataTypeStructure->setNewExpandBlockNumber(2);
        b= objDataTypeStructure->getNewExpandBlockNumber();
        objDataTypeStructure->setSingleExpandBlockNumber(3);
        c = objDataTypeStructure->getSingleExpandBlockNumber();
        cout<< Dname1<<a << "  "<< b<< "  "<< c<<endl;

        objDataTypeSet->setDataTypeNumber(4);
        d = objDataTypeSet->getDataTypeNumber();
        cout <<d<<endl;

        objDataIndexDataDocument->setDataTypeNumber(6);
        f = objDataIndexDataDocument->getDataTypeNumber();
        objDataIndexDataDocument->setInitBlockNumber(7);
        g = objDataIndexDataDocument->getInitBlockNumber();
        objDataIndexDataDocument->setNewExpandBlockNumber(8);
        h = objDataIndexDataDocument->getNewExpandBlockNumber();
        cout<<"  "<<f<<"  "<<g<<"  "<<h<<endl;

        objSingleDataIndexEntry->setInitBlockNumber(11);
        k = objSingleDataIndexEntry->getInitBlockNumber();
        objSingleDataIndexEntry->setNewExpandBlockNumber(12);
        l = objSingleDataIndexEntry->getNewExpandBlockNumber();
        cout << "  "<< k<< "  "<<l<<endl;

        objSingleTablePropertyStructure->setTablePropertyNumber(13);
        m = objSingleTablePropertyStructure->getTablePropertyNumber();
        cout << m<<endl;

        objTableSet->setTableTotalNumber(14);
        n = objTableSet->getTableTotalNumber();
        cout << n<<endl;

        objTableSpace->setInitBlockNumber(15);
        o = objTableSpace->getInitBlockNumber();
        objTableSpace->setNewExpandBlockNumber(16);
        p = objTableSpace->getNewExpandBlockNumber();
        cout << o << "   "<<p<<endl;
        objMyDataType->setTypeNameLength(18);
        r = objMyDataType->getTypeNameLength();
        objMyDataType->setTypeName((uint8_t *)"Ion2");
        Dname3 = (uint8_t*)objMyDataType->getTypeName();
        cout<< Dname3 <<"   "<<r<<endl;

        objSingleDataTypeInformation->setBlockserialNumber(19);
        s = objSingleDataTypeInformation->getBlockserialNumber();
        objSingleDataTypeInformation->setBootBlockNumber(20);
        t = objSingleDataTypeInformation->getBootBlockNumber();
        objSingleDataTypeInformation->setDataName((uint8_t *)"Ion3");
        Dname2 = (uint8_t*)objSingleDataTypeInformation->getDataName();
        objSingleDataTypeInformation->setDataNameLength(21);
        u = objSingleDataTypeInformation->getDataNameLength();
        objSingleDataTypeInformation->setDataStructureLength(22);
        v = objSingleDataTypeInformation->getDataStructureLength();
        cout << s << "   "<<t<< "   "<<Dname2<<"  " <<u<<"   "<<v<<endl;

        CTest <int>obj_1;
        CTest <bool>obj_2;
        CTest <string>obj_3;

        NS_DataIndex::EntityTypeValue <int> *obj_4 = new NS_DataIndex::EntityTypeValue <int>();
        obj_4->m_tValue = 7;

        NS_DataIndex::EntityTypeValue <char *> *obj_5 = new NS_DataIndex::EntityTypeValue <char *>();
        obj_5->m_tValue = (char *)"nihao,shijie";

        cout << obj_4->m_tValue << endl;
        cout << obj_5->m_tValue << endl;
        cout << "ok" << endl;
        return 0;
}
