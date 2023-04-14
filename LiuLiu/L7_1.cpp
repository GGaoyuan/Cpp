//
// Created by gaoyuan on 2023/4/14.
//
#include <iostream>

using namespace std;

const double Pi = 3.1415926;

double Area(double radius);
double Circumference(double radius);

int main() {
    cout << "Area = " << Area(10) << endl;
    cout << "Circumference = " << Circumference(20) << endl;
    return 0;
}

double Area(double radius) {
    return Pi * radius * radius;
}

double Circumference(double radius) {
    return 2 * Pi * radius;
}