//
// Created by Kolodii Daniil on 06.10.2021.
//

#ifndef OOP4_DEMONSTRATION_H
#define OOP4_DEMONSTRATION_H
#include "LinkedStack.h"
#include "ArrayStack.h"
using namespace std;
class Demonstartion{
public:
    void show_ArrayStack(){
        ArrayStack a;
        a.push(10);
        a.push(3);
        cout<<a.pop()<<"\t";
        a.clear();
        cout<<a.isEmpty()<<"\n";
    }
    void show_LinkedStack(){
        LinkedStack a;
        a.push(10);
        a.push(3);
        cout<<a.pop()<<"\t";
        cout<<a.size()<<"\n";
        a.clear();
        a.isEmpty();
    }
};
#endif //OOP4_DEMONSTRATION_H
