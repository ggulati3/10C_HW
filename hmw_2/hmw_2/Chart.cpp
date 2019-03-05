/*
 Collaborators: Lamia Abbas, Cameron Sowers
 "I pledge that I have neither given nor received unauthorized assistance on this assignment."

 Chart.h
 */

#include "Chart.h"

/*
 Do nothing if this draw function is called
 @param: N/A
 @return: N/A
 */
void Chart::draw() const {
    std::cout << "cannot draw base chart" ;
}

/*
 Add value to data vector
 @param: int item -- value to add to vector
 @return: N/A
 */
void Chart::add(int item) {
    data.push_back(item);
}

/*
 Create iterator that points to beginning of the data vector
 @param: N/A
 @return: Iterator
 */
Chart::Iterator Chart::begin() const {
    Iterator itr;
    itr.pos = &data[0];
    return itr;
}

/*
 Create Iterator that points to end of the data vector
 @param: N/A
 @return: Iterator
 */
Chart::Iterator Chart::end() const {
    Iterator itr;
    itr.pos = &data[data.size()];
    return itr;
}

/*
 Check if two iterators are pointing to the same value
 @param: const Iterator &b -- address of iterator you are comparing with
 @return: bool -- return if two iterators are pointing to same address
 */
bool Chart::Iterator::operator!=(const Iterator &b) const {
    return pos != b.pos;
}

/*
 Move iterator up to the next value of the vector
 @param: N/A
 @return: N/A
 */
void Chart::Iterator::operator++(){
    this->pos+=1;
}
/*
 Get value current iterator is pointing to
 @param: N/A
 @return: int -- the value the iterator is pointing to
 */
int Chart::Iterator::operator*(){
    return *pos;
}

