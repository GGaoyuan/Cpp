//
// Created by gaoyuan on 2023/4/14.
//
//编写参数包含默认值的函数，这种默认值可被用户提供的值覆盖

#include <iostream>
using namespace std;

double Area(double radius, double Pi = 3.14);

int main() {
    cout << "Area With Default Params = " << Area(10) << endl;
    cout << "Area = " << Area(10, 20) << endl;
    return 0;
}

double Area(double radius, double Pi) {
    return Pi * radius * radius;
}