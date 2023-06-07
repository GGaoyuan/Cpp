//
// Created by gaoyuan on 2023/6/6.
//

#include <iostream>

using namespace std;

int main() {
    cout << "123123" << endl;

    bool *isSunny;
    cout << "Is it sunny (y/n)";
    char userInput = 'y';
    cin >> userInput;

    if (userInput == 'y') {
        isSunny == new bool;
        *isSunny = true;
    }

    return 0;
}
