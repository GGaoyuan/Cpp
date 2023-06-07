//
// Created by gaoyuan on 2023/6/6.
//

#include <iostream>
#include <string>

using namespace std;

class Fish {
private:
    bool isFreshWaterFish;
public:
    Fish(bool isFreshWaterFish): isFreshWaterFish(isFreshWaterFish) {   //给构造函数传入参数
//        this->isFreshWaterFish = isFreshWaterFish;
        cout << "Fish constructor" << endl;
    }
    void Swim() {
        if (isFreshWaterFish) {
            cout << "Fish swims in lake" << endl;
        } else {
            cout << "Fish swims in sea" << endl;
        }
    }

    ~Fish() {
        cout << "Fish destroy" << endl;
    }
};

class Tuna: public Fish {
public:
    Tuna(): Fish(false) {
        cout << "Tuna constructor" << endl;
    }

    void Swim() {
        cout << "Tuna Swim" << endl;
    }

    ~Tuna() {
        cout << "Tuna destroy" << endl;
    }
};

class Carp: public Fish {
public:
    Carp(): Fish(true) {
        cout << "Carp constructor" << endl;
    }

    void Swim() {
        Fish::Swim();
        cout << "Carp Swim" << endl;
    }

    ~Carp() {
        cout << "Carp destroy" << endl;
    }
};


int main() {
    Carp *lunch = new Carp();
    lunch->Swim();
    delete lunch;

    Tuna *dinner = new Tuna();
    dinner->Swim();
    dinner->Fish::Swim();
    delete dinner;
    return 0;
}