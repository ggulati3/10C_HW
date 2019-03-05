/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
 Student.h
 */

#ifndef Student_h
#define Student_h
#include <stdlib.h>
#include <string>

class Student {
public:
    /*
     initialize student object w/ no params -- default id is an empty string
     @param: N/A
     @return: N/A
     */
    Student();
    /*
     initialize student object w/ given student_id
     @param: string i_name
     @return: N/A
     */
    Student(std::string i_name);
    /*
     get id of the Student Class
     @param: N/A
     @return: std::string student id
     */
    std::string get_id() const;
private:
    std::string name;
};

#endif /* Student_h */
