/**
 * @authors Daniel Acuña Mora, Josue Mata
 */
#include "Lista.h"

/**
 * @brief Constructor de la clase Lista.
 */

Lista::Lista() {
    head = NULL;
    tail = NULL;
    headGC = NULL;
    tailGC = NULL;
}


/**
 * @brief Funcion que agrega un nodo al inicio de la lista, recibe un numero entero que será el valor que se almacene
 * en el Nodo.
 * @param valor
 */
void Lista::addFirst(int valor) {
    Nodo *node = new Nodo();
    node->dato = valor;
    node->next = this->head;
    this->head = node;
    //std::cout << "Se ha agregado el valor" << node->dato << " en la dirección de memoria: " << &node->dato << std::endl;
}

/**
 * @brief Funcion que agrega un nodo al final de la lista, recibe un numero entero que será el valor que se almacene
 * en el Nodo.
 * @param valor
 */
void Lista::addLast(int valor){
    Nodo *temp = new Nodo;
    temp->dato = valor;
    temp->next = NULL;

    if (!head) { //
        head = temp;
        return;
    } else { // find last and link the new node
        Nodo *last = head;
        while (last->next) last = last->next;
        last->next = temp;
    }

}

/**
 * @brief Simple implementacion de una funcion que muestra los valores de cada nodo en la lista.
 */
void Lista::vernodos() {
    Nodo *temp;
    temp = head;
    int i = 1;
    while (temp != NULL) {
        std::cout << i << ") Dirección de memoria: " << &temp->dato << "| " << "Dato:" << temp->dato << " "
                  << std::endl;
        temp = temp->next;
        i++;
    }
}

/**
 * @brief Funcion que elimina el primer nodo de una lista.
 */

void Lista::delete_first() {

    Nodo *temp;
    if (head == NULL) {
        std::cout << "No hay elementos para eliminar." << std::endl;
    } else {
        temp = head;
        head = temp->next;
        delete (temp);
    }

}

/**
 * @brief Funcion que elimina el ultimo nodo de una lista.
 */
void Lista::delete_last() {
    Nodo *ptr, *prev;
    if (head == NULL)
        std::cout << "No hay elementos en la lista." << std::endl;
    else if (head->next == NULL) {
        ptr = head;
        head = NULL;
        delete (ptr);
        std::cout << "El ultimo elemento ha sido eliminado." << std::endl;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        delete (ptr);
    }

}

/**
 * @brief Esta funcion se encarga de agregar un Nodo(para collector) en la lista del Collector, para asi poder
 * tener a mano la memoria que se puede utilizar, recibe como parámetros una direccion de memoria.
 * @param address
 */
void Lista::addCollectorEnd(int *address) {
    NodoGC *nodeCol = new NodoGC();
    nodeCol->adress = address;
    nodeCol->next = this->headGC;
    this->headGC = nodeCol;

}

/**
 * @return Cabeza del Collector.
 */

NodoGC *Lista::getHeadGC() {
    return headGC;
}

/**
 * @brief Funcion que elimina el primer elemento de la lista Collector, para así liberar memoria que no está siendo utulizada.
 */
void Lista::deleteCollectorFirst() {
    if (headGC == NULL) {
        std::cout << "esta vacia" << std::endl;
    } else {
        NodoGC *ptr = headGC;
        headGC = headGC->next;
        free(ptr);

    }
}