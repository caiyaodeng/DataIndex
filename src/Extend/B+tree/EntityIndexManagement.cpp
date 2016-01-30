#include "../../../include/Extend/B+tree/EntityIndexManagement.h"

namespace NS_DataIndex {

    BPlusTree::BPlusTree () {}

    BPlusTree::~BPlusTree() {}

    uint32_t BPlusTree::CreateBinTree (TreeNode **rootp,ElementType **lp) {
        ElementType CurrElement;

        if(*lp==NULL) return 0; /*    字符串不存在，返回 0 */
        if(**lp==0) return 1; /*    字符串为空，返回1      */
        CurrElement=*(*lp);
        (*lp)++;
        if(CurrElement=='.') { (*rootp)=NULL; return 1; }
        if(!((*rootp)=(TreeNode *) malloc(sizeof(TreeNode))) ) return 0;
        (*rootp)->data=CurrElement;
        if(!CreateBinTree(&(*rootp)->LChild,lp)) return 0;
        return CreateBinTree(&(*rootp)->RChild,lp);
    }
}
