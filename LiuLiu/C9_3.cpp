//
// Created by gaoyuan on 2023/6/6.
//

#include <iostream>
#include <string>

using namespace std;

class Human {
private :
    string name;
    int age;

public:
    Human() {   //constructor
        this->age = 1;
        cout << "Human constructor" << endl;
    }

    Human(string humansName, int humansAge) // overloaded
    {
        name = humansName;
        age = humansAge;
        cout << "Overloaded constructor creates ";
        cout <<name<<"of"<<age<<"years"<<endl;
    }

    void SetName(string humansName) {
        this->name = humansName;
    }

    void SetAge(int humansAge) {
        this->age = humansAge;
    }

    void instroduceSelf() {
        cout << "I am " + name << "and am" << age << "years old" << endl;
//        cout << age << "years old" << endl;
    }
};


int main() {
    Human *human = new Human();
    human->SetAge(10);
    human->SetName("yuan da");
    human->instroduceSelf();
    delete human;
    return 0;
}