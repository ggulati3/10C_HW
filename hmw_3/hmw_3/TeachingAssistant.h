/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
 TeachingAssistnat.h
 */

#ifndef TeachingAssistant_h
#define TeachingAssistant_h

#include "Student.h"
#include "Employee.h"

class TeachingAssistant : public Student, public Employee {
public:
    // Default consructor that initializes default constructor of Student and Employee objects
    TeachingAssistant();
    /*
     Constructor w/ params that initializes Student Object and Employee Object w/ input of string
     @param: string student_id, string employee_id
     @return: N/A
     */
    TeachingAssistant(std::string student_id, std::string employee_id);
    /*
     get id of the Employee Class
     @param: N/A
     @return: std::string employee id
     */
    std::string get_id() const;
    /*
     get id of the Student Class
     @param: N/A
     @return: std::string student id
     */
    std::string student_id() const;
};

#endif /* TeachingAssistant_h */
