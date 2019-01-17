//
//  TreeNode.h
//  hmw_1
//
//  Created by Gaurav Gulati on 1/16/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#ifndef TreeNode_h
#define TreeNode_h

#include <string> // double check if it goes here

class TreeNode {
public:
    TreeNode();
    void insert_node(TreeNode* new_node);
    
private:
    std::string data;
    TreeNode* left;
    TreeNode* right;
    friend class BinarySearchTree;
};

#endif /* TreeNode_h */

