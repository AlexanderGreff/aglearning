#include <iostream>
#include "queuewithlist.ipp"
#include "stackwithlist.ipp"
#include "queuewithvector.ipp"
#include "stackwithvector.ipp"

int main()
{
    Queue<int> myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Front element: " << myQueue.front() << std::endl;
    std::cout << "Queue size: " << myQueue.size() << std::endl;

    myQueue.dequeue();

    std::cout << "Front element after dequeue: " << myQueue.front() << std::endl;
    std::cout << "Queue size after dequeue: " << myQueue.size() << std::endl;

    Stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl;
    std::cout << "Stack size: " << myStack.size() << std::endl;

    myStack.pop();

    std::cout << "Top element after pop: " << myStack.top() << std::endl;
    std::cout << "Stack size after pop: " << myStack.size() << std::endl;

    Queue<int> myQueue1;

    myQueue1.enqueue(10);
    myQueue1.enqueue(20);
    myQueue1.enqueue(30);

    std::cout << "Front element: " << myQueue1.front() << std::endl;
    std::cout << "Queue size: " << myQueue1.size() << std::endl;

    myQueue1.dequeue();

    std::cout << "Front element after dequeue: " << myQueue1.front() << std::endl;
    std::cout << "Queue size after dequeue: " << myQueue1.size() << std::endl;

    Stack<int> myStack1;

    myStack1.push(10);
    myStack1.push(20);
    myStack1.push(30);

    std::cout << "Top element: " << myStack1.top() << std::endl;
    std::cout << "Stack size: " << myStack1.size() << std::endl;

    myStack1.pop();

    std::cout << "Top element after pop: " << myStack1.top() << std::endl;
    std::cout << "Stack size after pop: " << myStack1.size() << std::endl;


    return 0;
}
