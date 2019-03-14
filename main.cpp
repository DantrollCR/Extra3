
#include "Lista.h"

//https://github.com/DantrollCR/Extra3
int main() {
    Lista *ls = new Lista;
    ls->delete_first();
    ls->addFirst(5);
    ls->addFirst(888);
    ls->addLast(31);
    ls->addFirst(85);
    ls->addFirst(85);

    ls->vernodos();
    ls->delete_last();
    ls->delete_last();
    ls->delete_last();

    ls->addFirst(75);
    ls->vernodos();


    return 0;
}