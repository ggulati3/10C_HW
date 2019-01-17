//
//  BinarySearchTree.h
//  hmw_1
//
//  Created by Gaurav Gulati on 1/16/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "TreeNode.h"
#include <string> // double check its in the right place
#include <iostream>  // double check its in the right place (only needed for testing)

class BinarySearchTree {
public:
    BinarySearchTree();
    void insert (std::string data);
    
    ~BinarySearchTree();
    
    BinarySearchTree(const BinarySearchTree&);
    
    BinarySearchTree& operator=(const BinarySearchTree&);
private:
    void kill_tree(TreeNode*);
    TreeNode* copy(const TreeNode*);
    TreeNode* root;
};

#endif /* BinarySearchTree_h */

