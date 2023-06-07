//
// Created by gaoyuan on 2023/4/21.
//


#include <iostream>

using namespace std;

void reftest(int& num) {
    num = num + 10;
}

void pointerTest(int* p) {
    *p = *p * 2;
}

int main() {

    int a = 10;
    reftest(a);
    cout << a << endl;

    int b = 20;
    int* p = &b;
    pointerTest(p);
    cout << *p << endl;
    cout << b << endl;

    return 0;
}
