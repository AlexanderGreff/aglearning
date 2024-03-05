#include "stackwithvector.hpp"


    // Function to add an element to the top of the stack
    template<typename T>
    void StackV<T>::push(const T& element) {
        container.push_back(element);
    }

    // Function to remove the top element from the stack
    template<typename T>
    void StackV<T>::pop() {
        if (!container.empty()) {
            container.pop_back();
        } else {
            std::cerr << "Stack is empty. Cannot pop.\n";
        }
    }

    // Function to get the top element of the stack
    template<typename T>
    T StackV<T>::top() const {
        if (!container.empty()) {
            return container.back();
        } else {
            std::cerr << "Stack is empty. No top element.\n";
            // You might want to throw an exception here instead of returning a default value
            return T(); // Default value for type T
        }
    }

    // Function to check if the stack is empty
    template<typename T>
    bool StackV<T>::isEmpty() const {
        return container.empty();
    }

    // Function to get the size of the stack
    template<typename T>
    size_t StackV<T>::size() {
        return container.size();
    }





