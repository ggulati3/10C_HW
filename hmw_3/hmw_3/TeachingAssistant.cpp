/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
 TeachingAssistant.cpp
 */

#include "TeachingAssistant.h"


TeachingAssistant::TeachingAssistant(): Student(), Employee() {}

TeachingAssistant::TeachingAssistant(std::string student_id, std::string employee_id)
: Student(student_id), Employee(employee_id) {}

std::string TeachingAssistant::get_id() const {
    return this->Employee::get_id();
}

std::string TeachingAssistant::student_id() const {
    return this->Student::get_id();
}
