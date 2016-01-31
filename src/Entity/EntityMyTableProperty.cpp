#include "../../include/Entity/EntityMyTableProperty.h"

namespace NS_DataIndex {

    MyTableProperty::MyTableProperty ()
        :
        m_objMyDataType (NULL) {
            m_objMyDataType = new MyDataType ();
        }

    MyTableProperty::~MyTableProperty () {
        if (m_objMyDataType != NULL) {
            delete m_objMyDataType;
            m_objMyDataType = NULL;
        }
    }

}
