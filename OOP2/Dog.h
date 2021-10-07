//
// Created by Kolodii Daniil on 20.09.2021.
//Task 2,3,4
//

#ifndef OOP2_DOG_H
#define OOP2_DOG_H
#pragma once;
using namespace std;

class Dog {
public:

    Dog();

    Dog(string, int);

    int counter();

    void set_name(string);

    void set_age(int);

    string get_name();

    int get_age();

    void voice();
private:
    string name;
    int age;

};


#endif //OOP2_DOG_H
