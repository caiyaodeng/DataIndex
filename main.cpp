#include <iostream>
#include "EntityDataTypeStructure.h"
#include "EntityDataTypeInformation.h"
#include "EntityAllDataTypeSet.h"

using namespace std;

    int main(){
        NS_DataIndex::DataTypeStructure *objDataTypeStructure = new NS_DataIndex::DataTypeStructure();
        NS_DataIndex::AllDataTypeSet *objAllDataTypeSet = new NS_DataIndex::AllDataTypeSet();
        objDataTypeStructure->setDatabaseName((const uint8_t *)"lll");
        objDataTypeStructure->setInitBlockNumber(1);
        objDataTypeStructure->setNewExpandBlockNumber(2);
        //objDataTypeStructure->setSingleExpandBlockNumber(3);
        objAllDataTypeSet->setDataTypeNumber(4);
        //objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->setBlockNumber(5);
        //objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->setDataName((uint8_t *)"China2");
        //objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->setDataNameLength(6);
        //objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->setDataStructureLength(7);

        uint8_t *DatabaseName;
        //uint8_t *DataName;
        uint32_t InitBlockNumber,NewExpandBlockNumber,DataTypeNumber;
        //,SingleExpandBlockNumber,BlockNumber,DataNameLength,DataStructureLength;
        DatabaseName = (uint8_t *)objDataTypeStructure->getDatabaseName();
        InitBlockNumber = objDataTypeStructure->getInitBlockNumber();
        NewExpandBlockNumber = objDataTypeStructure->getNewExpandBlockNumber();
        //SingleExpandBlockNumber = objDataTypeStructure->getSingleExpandBlockNumber();
        DataTypeNumber = objAllDataTypeSet->getDataTypeNumber();
        //BlockNumber = objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->getBlockNumber();
        //DataName = objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->getDataName();
        //DataNameLength = objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->getDataNameLength();
        //DataStructureLength = objDataTypeStructure->m_objAllDataTypeSet->m_objDataTypeInformation->getDataStructureLength();

        cout << "DatabaseName " << DatabaseName <<endl;
        cout << "InitBlockNumber " << InitBlockNumber <<endl;
        cout << "NewExpandBlockNumber " << NewExpandBlockNumber <<endl;
        //cout << "SingleExpandBlockNumber " << SingleExpandBlockNumber <<endl;
        cout << "DataTypeNumber " << DataTypeNumber <<endl;
        //cout << "BlockNumber " << BlockNumber <<endl;
        //cout << "DataName " << DataName <<endl;
        //cout << "DataNameLength " << DataNameLength <<endl;
        //cout << "DataStructureLength " << DataStructureLength <<endl;

        //delete objDataTypeStructure;
        //objDataTypeStructure = NULL;
        return 0;


    }
