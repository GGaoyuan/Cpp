//
// Created by gaoyuan on 2023/4/14.
//
//将数组传递给函数
#include <iostream>

using namespace std;

void DisplayArray(int numbers[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << "index = " << i << ", num =" << numbers[i] << endl;
    }
    cout << endl;
}

int main() {
    int nums[] = {1,3,5,7,9};
    DisplayArray(nums, 5);
    return 0;
}
