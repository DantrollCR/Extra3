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
        temp = NULL;
    } else {
        tail->next = temp;
        tail = temp;
        tail->next = NULL;

    }

}

void Lista::addFirst(int valor){

    Nodo *temp = new Nodo;
    temp->dato = valor;
    temp->next = head;
    head = temp;
}

void Lista::delete_first() {
    Nodo *temp = new Nodo;
    temp = head;
    head = head->next;
    delete temp;
}

void Lista::delete_last() {
    Nodo *current = new Nodo;
    Nodo *previous = new Nodo;
    current = head;
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }
    tail = previous;
    previous->next = NULL;
    delete current;
}

void Lista::vernodos() {
    Nodo *temp = new Nodo;
    head = temp;
    while (temp != NULL) {
        std::cout << temp->dato << std::endl;
        std::cout << &temp->dato << std::endl;
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

void Lista::vernodosGC() {
    NodoGC *temp = new NodoGC;
    headGC = temp;
    while (temp != NULL) {
        std::cout << temp->adress << std::endl;
        temp = temp->next;
    }
}
void Lista::deleteCollectorFirst(){

    {
        NodoGC *temp = new NodoGC;
        headGC = temp;
        headGC = headGC->next;
        delete (temp);
    }
}

void Lista::deleteCollectorEnd() {

}

Nodo *Lista::gethead() const {
    return head;
}

void Lista::sethead(Nodo *head) {
    Lista::head = head;
}

Nodo *Lista::gettail() const {
    return tail;
}

void Lista::settail(Nodo *tail) {
    Lista::tail = tail;
}

NodoGC *Lista::getHeadGC() const {
    return headGC;
}

void Lista::setHeadGC(NodoGC *headGC) {
    Lista::headGC = headGC;
}

NodoGC *Lista::getTailGC() const {
    return tailGC;
}

void Lista::setTailGC(NodoGC *tailGC) {
    Lista::tailGC = tailGC;
}
