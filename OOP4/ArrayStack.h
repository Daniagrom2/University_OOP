//
// Created by Kolodii Daniil on 06.10.2021.
//

#ifndef OOP4_ARRAYSTACK_H
#define OOP4_ARRAYSTACK_H
#include "Stack.h"
#include <vector>
using namespace std;
class Reverse{
public:
    virtual void reverse() = 0;
};

class ArrayStack:Stack,Reverse {
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
    void reverse() {
        int size = stack.size();
        for (int i = stack.size()-1; i >-1 ; i--) {
            push(stack[i]);
        }
        for (int i = 0; i < size; i++) {
            auto it = stack.begin();
            stack.erase(it);
            it++;
        }
    }
    void show_all(){
        for (int i = 0; i < stack.size(); ++i) {
            cout<<stack[i]<<"\t";
        }
    }

private:
    vector<int> stack;
};


#endif //OOP4_ARRAYSTACK_H
