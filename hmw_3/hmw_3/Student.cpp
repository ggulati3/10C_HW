/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
Student.cpp
 */

#include "Student.h"


Student::Student(): name("") {};

Student::Student(std::string i_name): name(i_name) {}

std::string Student::get_id() const {
    return name;
}
