/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
main.cpp
 */

#include <iostream>
#include <string>
#include <vector>

#include "TeachingAssistant.h"

int main() {
    
    Student* fred = new Student("fred");
    Employee* jane = new Employee("jane");
    std::cout << "id for fred " << fred->get_id() << "\n";
    std::cout << "id for jane " << jane->get_id() << "\n";
    TeachingAssistant* beth = new TeachingAssistant("beth_Sid", "beth_Eid");

    std::cout << "id for Employee beth " << beth->get_id() << "\n";
    std::cout << "id for Student beth " << beth->student_id() << "\n";
    
    std::vector<Student*> students;
    students.push_back(fred);
    students.push_back(beth);
    // add two different student objects to the students vector
    for (int i = 0; i < students.size(); i++)
        std::cout << "student " << students[i]->get_id() << "\n";
    std::vector<Employee*> employees;
    employees.push_back(jane);
    employees.push_back(beth);
    // add two different employee objects to the employees vector
    for (int i = 0; i < employees.size(); i++)
        std::cout << "employee " << employees[i]->get_id() << "\n";
    return 0;
}
