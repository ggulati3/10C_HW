/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
 BarChart.cpp
 */

#include "BarChart.h"

/*
 Output each value to console and number of stars it represents
 @param: N/A
 @return: N/A
 */
void BarChart::draw() const {
    Iterator start = begin();
    
    Iterator last = end();
    
    // this loop runs through entire data vector from first value to last value
    while(start != last) {
        std::cout<< *start << " ";
        for(int i = 0; i < *start; i++){
            std::cout << "*";
        }
        std::cout<< std::endl;
        start.pos++;
    }
    
    
}
