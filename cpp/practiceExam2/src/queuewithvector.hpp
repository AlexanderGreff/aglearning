#include <iostream>
#include <vector>

template<typename T>
class QueueV {
private:
    std::vector<T> container;

public:
    // Function to add an element to the back of the queue
    void enqueue(const T& element);

    // Function to remove the front element from the queue
    void dequeue();

    // Function to get the front element of the queue
    T front();

    // Function to check if the queue is empty
    bool isEmpty() const;

    // Function to get the size of the queue
    size_t size() const;
};
