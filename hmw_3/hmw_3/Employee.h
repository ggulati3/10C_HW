/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
Employee.h
 */

#ifndef Employee_h
#define Employee_h
#include <stdlib.h>
#include <string>

class Employee {
public:
    /*
     Initialize Employee W/ no params -- default id is an empty string
     @param: N/A
     @return: N/A
     */

    Employee();
    /*
     Initialize Employee W/ given string name
     @param: string input_name
     @return: N/A
     */

    Employee(std::string i_name);
    /*
     get id of the Employee Class
     @param: N/A
     @return: std::string employee id
     */
    std::string get_id() const;
private:
    std::string name;
};


#endif /* Employee_h */
