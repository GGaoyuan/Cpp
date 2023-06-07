//
// Created by gaoyuan on 2023/4/14.
//

//以引用参数(而不是返回值)
#include <iostream>

using namespace std;

void test(int p) {
    p = p * p;
}

void testReference(int &p) {
    p = p * p;
}


int main() {
    int a = 10;
    test(a);
    cout << "test:" << a << endl;

    int b = 10;
    testReference(b);
    cout << "testReference:" << b << endl;

    return 0;
}