//
//  BinarySearchTree.cpp
//  hmw_1
//
//  Created by Gaurav Gulati on 1/16/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#include "BinarySearchTree.h"


BinarySearchTree::BinarySearchTree() : root(nullptr) {} // what about functions: kill_tree and copy

void BinarySearchTree::insert(std::string data) {
    TreeNode* new_node = new TreeNode;
    new_node->data = data;
    new_node->left = nullptr;
    new_node->right = nullptr;
    
    if(root == nullptr) {
        root = new_node;
    } else {
        root->insert_node(new_node);
    }
}


void BinarySearchTree::kill_tree(TreeNode* node) {
    // postorder traversal (left, right, root)
    if(node != nullptr) {
        if(node->left != nullptr) {
            kill_tree(node->left);
        }
        if(node->right != nullptr) {
            kill_tree(node->right);
        }
        
        std::cout << node->data << std::endl; // for testing purposes
        delete node;
    }
}

TreeNode* BinarySearchTree::copy(const TreeNode* node) {
    if(node == nullptr) {
        return nullptr;
    }
    
    TreeNode* clone = new TreeNode;
    clone->data = node->data;
    clone->left = copy(node->left);
    clone->right = copy(node->right);
    
    return clone;
    
}

BinarySearchTree::~BinarySearchTree() {
    kill_tree(root);
}


BinarySearchTree::BinarySearchTree(const BinarySearchTree& bst) {
    root = copy(bst.root);
}

BinarySearchTree& BinarySearchTree::operator=(const BinarySearchTree& bst) {
    if(this != &bst) {
        // clean
        kill_tree(root);
        // assign
        root = copy(bst.root);
    }
    
    return *this;
}

