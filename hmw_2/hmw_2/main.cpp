/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."

 */

#include <iostream>
#include "BarChart.h"

int main() {
    BarChart bc;
    bc.add(3);
    bc.add(5);
    bc.add(2);
    bc.add(7);
    bc.draw();
    return 0;
}
