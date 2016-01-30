#ifndef _INCLUDE_EXTEND_B_TREE_ENTITYINDEXMANAGEMENT_H_
#define _INCLUDE_EXTEND_B_TREE_ENTITYINDEXMANAGEMENT_H_

#include <stdint.h>

namespace NS_DataIndex {

    class BPlusTree {

        typedef char ElementType;

        typedef struct Node{

            ElementType data;
            struct Node *LChild;    //左子树
            struct Node *RChild;    //右子树

        }TreeNode;

    public:
        BPlusTree ();
        ~BPlusTree ();
    public:

        uint32_t CreateBinTree (TreeNode **rootp,ElementType **lp);

        TreeNode *FindNode( TreeNode *rootp,ElementType e );

        uint32_t DelTree( TreeNode *rootp,ElementType e );

        void FreeTree( TreeNode *rootp );

    };



}
#endif /* INCLUDE_EXTEND_B_TREE_ENTITYINDEXMANAGEMENT_H_ */
