//
//  Appointment.cpp
//  hmw_5
//
//  Created by Gaurav Gulati on 3/4/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#include "Appointment.h"

Appointment::Appointment() : description(""), date(""), time("") {}


std::string Appointment::get_desc() const {
    return description;
}
std::string Appointment::get_date() const {
    return date;
}
std::string Appointment::get_time() const{
    return time;
}

void Appointment::readFile(std::ifstream& fs) {
    std::string temp_desc;
    getline(fs, temp_desc);
    if(temp_desc == "") {
        std::logic_error description("Empty Description");
        throw description;
    } else {
        description = temp_desc;
    }
    
    std::string temp_date;
    fs >> temp_date;
    if(temp_date.size() != 8) {
        std::cout << temp_date << std::endl;
        std::logic_error wrong_date_format("Date in wrong format. Must be in MM/DD/YY");
        throw wrong_date_format;
    } else {
        date = temp_date;
    }
    
    std::string temp_time;
    fs >> temp_time;
    if(temp_time.size() != 5) {
        std::logic_error wrong_time_format("Time in wrong format. Must be in HH:MM ");
        throw wrong_time_format;
    } else {
        time = temp_time;
    }
    
    std::cout << "Reading Complete." << std::endl;
}

void Appointment::writeFile(std::ofstream& ofs) {
    ofs << description << "\n" << date << "\n" << time << "\n";
    if(ofs.fail()) {
        std::runtime_error error("Error while writing to file. Check disk storage.");
        throw error;
    }
}
