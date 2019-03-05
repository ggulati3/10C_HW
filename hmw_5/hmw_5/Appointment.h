//
//  Appointment.h
//  hmw_5
//
//  Created by Gaurav Gulati on 3/4/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#ifndef Appointment_h
#define Appointment_h

#include <string>
#include <iostream>
#include <fstream>
#include <ostream>
#include <stdexcept>

class Appointment {
public:
    Appointment();
    std::string get_desc() const;
    std::string get_date() const;
    std::string get_time() const;
    
    void readFile(std::ifstream& fs);
    void writeFile(std::ofstream& os);
    
private:
    std::string description;
    std::string date;
    std::string time;
};

#endif /* Appointment_h */
