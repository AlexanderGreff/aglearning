

#include <iostream>
#include <memory>
#include <string>
#include "List.h"

int main(int argc, char const *argv[])
{
    List<int> intlist;
    intlist.insertAtFront(5);
    intlist.insertAtFront(7);
    intlist.insertAtFront(1);
    int result = intlist.index(2);
    std::cout << result << "\n";



    return 0;
}
