#include <iostream>
#include "Lista.h"

//https://github.com/DantrollCR/Extra3

int main() {
    Lista ls;
    ls.addEnd(8);
    ls.addEnd(10);
    ls.addFirst(5);
    ls.addEnd(7);
    ls.addFirst(2);
    std::cout << "Hello, World!" << std::endl;
    ls.vernodos();
    return 0;
}