
#include "Lista.h"

/**
 * Método principal main el cual ejecuta el llamado de las funciones,
 * agregando nodos a la lista, eliminadolos y mostrandolos en consola
 * @return
 */

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