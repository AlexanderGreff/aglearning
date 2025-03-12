#include <iostream>
#include <list>

template<typename T>
class Stack {
private:
    std::list<T> container;

public:
    // Function to add an element to the top of the stack
    void push(const T& element);

    // Function to remove the top element from the stack
    void pop();
    // Function to get the top element of the stack
    T top() const;

    // Function to check if the stack is empty
    bool isEmpty() const;

    // Function to get the size of the stack
    size_t size() const;

};