/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
Employee.cpp
 */

#include "Employee.h"

Employee::Employee(): name("") {}

Employee::Employee(std::string i_name): name(i_name) {}

std::string Employee::get_id() const {
    return name;
}
