//
// Created by Kyle Jacobson on 1/21/2019.
//

#include <iostream>
#include "MyStack.h"
using namespace std;

// Push an item in the stack.
void MyStack_vector::push(const int & value){
    elements.push_back(value);
}

// Pop an item from the stack.
void MyStack_vector::pop(){
    if(elements.size())
        elements.pop_back();
    else
        cout << "The Stack is now empty! No item is popped!" << endl;
}

// Return the item on the top of the stack, no actual pop() happens.
int MyStack_vector::top() const {
    return elements.back();
}

// Whether the stack is empty?
bool MyStack_vector::empty() const {
    return elements.empty();
}

// Get the number of elements in the stack.
int MyStack_vector::GetSize() const {
    elements.size();
}

// Push an item in the stack.
void MyStack_list::push(const int & value){
    elements.push_back(value);
}

// Pop an item from the stack.
void MyStack_list::pop()
{
    if(elements.size())
        elements.pop_back();
    else
        cout << "The Stack is now empty! No item is popped!" << endl;
}

// Return the item on the top of the stack, no actual pop() happens.
int MyStack_list::top() const {
    return elements.back();
}

// Whether the stack is empty?
bool MyStack_list::empty() const {
    return elements.empty();
}

// Get the number of elements in the stack.
int MyStack_list::GetSize() const {
    return elements.size();
}