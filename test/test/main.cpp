//
//  main.cpp
//  test
//
//  Created by Gaurav Gulati on 2/26/19.
//  Copyright © 2019 Gaurav Gulati. All rights reserved.
//

#include <iostream>

using namespace std;


class A {
public:
    virtual void c() {
        m_num++;
    }
    void get_num() {
        cout << m_num << endl;
    }
private:
    int m_num = 0;
};

class B: public A {
public:
    virtual void c() {
        A::c();
    }
};

int main(int argc, const char * argv[]) {
    B test;
    test.c();
    test.get_num();
}
