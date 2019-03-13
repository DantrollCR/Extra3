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

void Lista::addEnd(int valor) {
    Nodo *temp = new Nodo;
    temp->dato = valor;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
        tail->next = NULL;

    }


}

void Lista::vernodos() {
    Nodo *temp = new Nodo;
    temp = head;
    while (temp != NULL) {
        std::cout << &temp->dato << std::endl;

        std::cout << temp->dato << std::endl;
        temp = temp->next;
    }
}

void Lista::delete_first() {
    Nodo *temp = new Nodo;
    temp = head;
    head = head->next;
    delete temp;
}

void Lista::addCollectorEnd(int *address) {
    NodoGC *temp = new NodoGC;
    temp->adress = address;
    temp->next = NULL;
    if (headGC == NULL) {
        headGC = temp;
        tailGC = temp;
    } else {
        tailGC->next = temp;
        tailGC = temp;
        tailGC->next = NULL;
    }

}

NodoGC *Lista::getHeadGC() {
    return headGC;
}

void Lista::deleteCollectorFirst() {
    NodoGC *temp = new NodoGC;
    temp = headGC;
    headGC = headGC->next;
    delete temp;
}