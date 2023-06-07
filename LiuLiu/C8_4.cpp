//
// Created by gaoyuan on 2023/4/14.
//

#include <iostream>

using namespace std;

int main() {
    int age = 10;
    int* p = &age;


    cout << "age = " << age << endl;
    cout << "&age = " << &age << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&p = " << &p << endl;
    cout << "------------ " << endl;
    age = 20;
    cout << "age = " << age << endl;
    cout << "&age = " << &age << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&p = " << &p << endl;
    cout << "------------ " << endl;
    *p = 30;
    cout << "age = " << age << endl;
    cout << "&age = " << &age << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&p = " << &p << endl;
    return 0;
}