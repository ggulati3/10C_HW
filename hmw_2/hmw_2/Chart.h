/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
 
 Chart.h
 */

#ifndef Chart_h
#define Chart_h

#include <iostream>
#include <vector>

class Chart {
public:
    void add(int item);
    virtual void draw() const;
    class Iterator {
        public:
            const int* pos;
            bool operator!=(const Iterator& a) const;
            void operator++();
            int operator*();
    };

    Iterator begin() const;
    Iterator end() const;

protected:
    std::vector<int> data;
};

#endif /* Chart_h */

