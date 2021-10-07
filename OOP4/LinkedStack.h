//
// Created by Kolodii Daniil on 06.10.2021.
//

#ifndef OOP4_LINKEDSTACK_H
#define OOP4_LINKEDSTACK_H
#include "Stack.h"
#include <list>
using namespace std;
class LinkedStack:Stack {
public:
    void push(int data) {
        stack.push_back(data);
    }
    int pop() {
        auto i = stack.begin();
        for (; i != stack.end(); i++) {
        }
        i--;
        int value = *i;
        stack.erase(i);
        return value;
    }
    int size() {
        return stack.size();
    }
    bool isEmpty() {
        return stack.empty();
    }

    void clear() {
        stack.clear();
    }

private:
    list<int> stack;
};
#endif //OOP4_LINKEDSTACK_H
