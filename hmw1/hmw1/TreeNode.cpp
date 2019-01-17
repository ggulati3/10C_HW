//
//  TreeNode.cpp
//  hmw_1
//
//  Created by Gaurav Gulati on 1/16/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#include "TreeNode.h"


TreeNode::TreeNode(): data(""), right(nullptr), left(nullptr) {}


void TreeNode::insert_node(TreeNode *new_node){
    if(new_node->data < data) {
        if(left == nullptr) {
            left = new_node;
        } else {
            left->insert_node(new_node);
        }
    } else if (data < new_node->data) {
        if(right == nullptr) {
            right =  new_node;
        } else {
            right->insert_node(new_node);
        }
        
    }
}


