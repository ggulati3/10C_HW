/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."
*/
#ifndef binarySearch_h
#define binarySearch_h
#include <iostream>
#include <vector>

/**
 A class to find the value that is greater
 Use T operator for any primitive data types
 type T must have the () operator
 */

template<typename T>
class more {
public:
    bool operator() (const T& x, const T& y) const;
};

template<typename T>
bool more<T>::operator() (const T& x, const T& y) const {
    return x > y;
}

/**
 A class to find the value that is less
 Use T operator for any primitive data types
 type T must have the () operator
 */
template<typename T>
class less {
public:
    bool operator() (const T& x, const T& y) const;
};

template<typename T>
bool less<T>::operator() (const T& x, const T& y) const {
    return x < y;
}

/**
 function to find a value in a sorted list
 Use the less operator as the defualt comparator
 Recursively sort throught the array and return - 1 if not found
 */
template<typename T, typename CMP = std::less<T> >
size_t binary_search(std::vector<T> v, size_t from, size_t to, const T& value, CMP cmp=CMP() )
{
    if (from > to)
        return -1;
    size_t mid = (from + to) / 2;
    if (v[mid] == value)
        return mid;
    else if (cmp(v[mid], value) )
        return binary_search(v, mid + 1, to, value, cmp);
    else
        return binary_search(v, from, mid - 1, value, cmp);
}

#endif /* binarySearch_h */
