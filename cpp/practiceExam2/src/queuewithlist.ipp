#include "queuewithlist.hpp"

template<typename T>
void Queue<T>::enqueue(const T& element) 
{
        container.push_back(element);
    }

    // Function to remove the front element from the queue
    template<typename T>
    void Queue<T>::dequeue() 
    {
        if (!container.empty()) {
            container.pop_front();
        } else {
            std::cerr << "Queue is empty. Cannot dequeue.\n";
        }
    }

    // Function to get the front element of the queue
    template<typename T>
    T Queue<T>::front() const 
    {
        if (!container.empty()) {
            return container.front();
        } else {
            std::cerr << "Queue is empty. No front element.\n";
            // You might want to throw an exception here instead of returning a default value
            return T(); // Default value for type T
        }
    }

    // Function to check if the queue is empty
    template<typename T>
    bool Queue<T>::isEmpty() 
    {
        return container.empty();
    }

    // Function to get the size of the queue
    template<typename T>
    size_t Queue<T>::size() const 
    {
        return container.size();
    }
    