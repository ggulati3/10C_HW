//
//  main.cpp
//  hmw_1
//
//  Created by Gaurav Gulati on 1/16/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#include "BinarySearchTree.h"

int main() {
    
    BinarySearchTree t;
    t.insert("C");
    t.insert("B");
    t.insert("A");
    t.insert("D");
    t.insert("E");
    std::cout << "---------------" << std::endl;
    BinarySearchTree b;
    
    b=t;
    
    
    
    
    return 0;
}

