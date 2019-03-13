//
// Created by dantroll on 12/03/19.
//

#include "Lista.h"

Lista::Lista() {
    cabeza = NULL;
    cola = NULL;
    headGC = NULL;
    tailGC = NULL;
}

void Lista::addEnd(int valor) {
    Nodo *temp = new Nodo;
    temp->dato = valor;
    temp->next = NULL;
    if (cabeza == NULL) {
        cabeza = temp;
        cola = temp;
        temp = NULL;
    } else {
        cola->next = temp;
        cola = temp;
        cola->next = NULL;
        temp = NULL;

    }


}

void Lista::vernodos() {
    Nodo *temp = new Nodo;
    temp = cabeza;
    while (temp != NULL) {
        std::cout << temp->dato << std::endl;
        temp = temp->next;
    }
}

void Lista::addCollectorEnd(int *address) {
    NodoGC *temp = new NodoGC;
    temp->adress = address;
    temp->next = NULL;
    if (headGC == NULL) {
        headGC = temp;
        tailGC = temp;
        temp = NULL;
    } else {
        tailGC->next = temp;
        tailGC = temp;
        tailGC->next = NULL;
        temp = NULL;
    }
}