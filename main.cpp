
#include "Lista.h"

//https://github.com/DantrollCR/Extra3
int main() {
    Lista *ls = new Lista;
    ls->delete_first();
    ls->addLast(75);

    ls->addFirst(5);
    ls->addFirst(888);
    ls->addFirst(31);
    ls->addFirst(85);
    ls->addFirst(85);

    ls->vernodos();
    std::cout << "----------------------" << std::endl;
    ls->delete_last();
    ls->delete_last();
    ls->delete_last();

    ls->vernodos();


    return 0;
}