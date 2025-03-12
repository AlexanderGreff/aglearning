#include <iostream>
#include <list>

template<typename T>
class Queue {
private:
    std::list<T> container;

public:
    // Function to add an element to the back of the queue
    void enqueue(const T& element);

    // Function to remove the front element from the queue
    void dequeue();

    // Function to get the front element of the queue
    T front() const;

    // Function to check if the queue is empty
    bool isEmpty();

    // Function to get the size of the queue
    size_t size() const;
};

