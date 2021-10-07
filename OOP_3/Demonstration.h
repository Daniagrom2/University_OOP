//
// Created by Kolodii Daniil on 27.09.2021.
//

#ifndef OOP_3_DEMONSTRATION_H
#define OOP_3_DEMONSTRATION_H
#include <iostream>
#include "Pet.h"
#include "Pet.cpp"
#include "Dog.h"
#include "Dog.cpp"
#include "Fish.h"
#include "Fish.cpp"
#include "Duck.h"
#include "Duck.cpp"
#include "Eagle.h"
#include "Eagle.cpp"
#include "Turtle.h"
#include "Turtle.cpp"
#include "PetOwner.h"
#include "PetOwner.cpp"
#include "Walking.h"
#include "Swimming.h"
#include "Flying.h"

class Demonstration {
public:
    static void show_PetOwner(){
        Dog *dog = new Dog("Boby",3);
        Duck *duck = new Duck("Donald",3);
        Pet *eagle = new Eagle("Lok",3);

        PetOwner a("Steve");
        a.add_pet(dog);
        a.add_pet(duck);
        a.add_pet(eagle);
        a.remove_pet("Donald");
        cout<<"Owner: "<<a.get_name()<<"\nPets:\n";
        a.show_all_pets();
        cout<<"\n";
        cout<<"Dog:\n" ;
        dog->walk();
        cout<<"\nDuck:\n";
        duck->swim();
        duck->fly();
        delete dog;
        delete duck;
        delete eagle;
    }

};


#endif //OOP_3_DEMONSTRATION_H
