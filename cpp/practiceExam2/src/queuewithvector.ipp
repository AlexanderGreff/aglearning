#include "queuewithvector.hpp"


    // Function to add an element to the back of the queue
    template<typename T>
    void QueueV<T>::enqueue(const T& element) {
        container.push_back(element);
    }

    // Function to remove the front element from the queue
    template<typename T>
    void QueueV<T>::dequeue() {
        if (!container.empty()) {
            container.erase(container.begin());
        } else {
            std::cerr << "Queue is empty. Cannot dequeue.\n";
        }
    }

    // Function to get the front element of the queue
    template<typename T>
    T QueueV<T>::front() {
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
    bool QueueV<T>::isEmpty() const {
        return container.empty();
    }

    // Function to get the size of the queue
    template<typename T>
    size_t QueueV<T>::size() const {
        return container.size();
    }
