//
// Created by Kolodii Daniil on 06.10.2021.
//

#ifndef OOP4_ARRAYSTACK_H
#define OOP4_ARRAYSTACK_H
#include "Stack.h"
#include <vector>
using namespace std;
class ArrayStack:Stack {
public:
    void push(int data) {
stack.push_back(data);
    }
    int pop() {
        auto it = stack.begin();
        for (int i = 0; i < stack.size()-1; i++) {
            it++;
        }
        stack.erase(it);
        return stack[stack.size()];
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
    vector<int> stack;
};


#endif //OOP4_ARRAYSTACK_H
