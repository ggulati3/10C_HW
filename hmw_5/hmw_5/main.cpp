//
//  main.cpp
//  hmw_5
//
//  Created by Gaurav Gulati on 3/4/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#include <iostream>
#include <ostream>
#include "Appointment.h"
#include <string>

int main() {

    std::string input;
    std::ifstream ifs;
    std::ofstream ofs;
    std::cout << "Enter a file name: ";
    getline(std::cin, input);
    
    ifs.open(input);
    
    if(ifs.fail()) {
        std::cout << "File does not exists" << std::endl;
        return 0;
    }
   
    
    Appointment a;
    
    a.readFile(ifs);
    
    ofs.open("write.txt");
    a.writeFile(ofs);
    
    ifs.close();
    ofs.close();
    
    return 0;
}
