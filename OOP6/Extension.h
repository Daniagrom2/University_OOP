//
// Created by Kolodii Daniil on 15.11.2021.
//

#ifndef OOP6_EXTENSION_H
#define OOP6_EXTENSION_H

#include "Plane.h"
class Extension: public Plane{
public:
Extension(): Plane(){}
    Extension(string name,double weight): Plane(name,weight){}
   virtual void ShowData() = 0;

};


#endif //OOP6_EXTENSION_H
