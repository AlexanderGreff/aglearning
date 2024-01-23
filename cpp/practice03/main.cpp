

#include <iostream>
#include <memory>
#include <string>
#include "List.hpp"


int main(int argc, char const *argv[])
{
    ajg::List<int> intlist;
    intlist.insertAtFront(5);
    intlist.insertAtFront(7);
    intlist.insertAtFront(1);
    intlist.print(std::cout);
    int result = intlist.indexRecursive(2);
    std::cout << result << "\n";
    int result1 = intlist.indexIterative(2);
    std::cout << result1 << "\n";
    intlist.print(std::cout);



    return 0;
}
