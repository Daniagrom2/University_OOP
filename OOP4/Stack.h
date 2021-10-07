//
// Created by Kolodii Daniil on 06.10.2021.
//

#ifndef OOP4_STACK_H
#define OOP4_STACK_H


class Stack {
public:
    virtual void push(int) = 0;
    virtual int pop() = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void clear() = 0;
};


#endif //OOP4_STACK_H
