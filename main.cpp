
#include "Lista.h"

//https://github.com/DantrollCR/Extra3

int main() {
    Lista *ls = new Lista;
    ls->delete_last();
    ls->addEnd(5);
    ls->addEnd(888);
    ls->addEnd(85);
    ls->addEnd(85);

    ls->vernodos();
    ls->delete_last();
    ls->addEnd(75);
    ls->vernodos();


    return 0;
}