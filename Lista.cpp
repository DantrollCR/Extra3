//
// Created by dantroll on 12/03/19.
//

#include "Lista.h"

Lista::Lista() {
    head = NULL;
    tail = NULL;
    headGC = NULL;
    tailGC = NULL;
}


void Lista::addFirst(int data) {
    Nodo *node = new Nodo();
    node->dato = data;
    node->next = this->head;
    this->head = node;
    //std::cout << "Se ha agregado el valor" << node->dato << " en la dirección de memoria: " << &node->dato << std::endl;
}

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

void Lista::addCollectorEnd(int *address) {
    NodoGC *nodeCol = new NodoGC();
    nodeCol->adress = address;
    nodeCol->next = this->headGC;
    this->headGC = nodeCol;

}

NodoGC *Lista::getHeadGC() {
    return headGC;
}

void Lista::deleteCollectorFirst() {
    if (headGC == NULL) {
        std::cout << "esta vacia" << std::endl;
    } else {
        NodoGC *ptr = headGC;
        headGC = headGC->next;
        free(ptr);

    }
}

void Lista::vernodosGC() {
    NodoGC *temp = new NodoGC;
    temp = headGC;
    while (temp != NULL) {
        std::cout << &temp->adress << std::endl;

        std::cout << temp->adress << std::endl;
        temp = temp->next;
    }
}

void Lista::printCollector() {
    NodoGC *headCollector = this->headGC;
    int i = 1;
    while (headCollector) {
        std::cout << i << ": " << headCollector->adress << " Collector" << std::endl;
        headCollector = headCollector->next;
        i++;
    }
}

