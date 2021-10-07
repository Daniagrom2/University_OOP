//
// Created by Kolodii Daniil on 20.09.2021.
//

#include "Dog.h"

void Dog::set_name(string name) {
    this->name = name;
}

void Dog::set_age(int age) {
    this->age = age;
}

string Dog::get_name() {
    return this->name;
}

int Dog::get_age() {
    return this->age;
}

Dog::Dog() {
    name = "Незнайомець";
    age = 0;
    counter();
}

Dog::Dog(string name, int age) {
this->name = name;
this->age = age;
counter();
}

void Dog::voice() {
    for (int i = 0; i < age; i++) {
        cout<<"Gav"<<"\t";
    }

}

int Dog::counter() {
    static int counter;
    counter++;
    return counter;
}
