//
// Created by gaoyuan on 2023/6/6.
//

#include <iostream>
#include <string>

using namespace std;

class Human {
    Human() {
        cout << "Human constructor" << endl;
    }

    ~Human() {
        cout << "Human destroyer" << endl;
    }
};

class Stuff {
    Stuff(string company) {
        cout << "Stuff constructor" << endl;
    }
    ~Stuff() {
        cout << "Stuff destroyer" << endl;
    }
};

class GaoYuan: Stuff, Human {

};

int main() {

    return 0;
}
