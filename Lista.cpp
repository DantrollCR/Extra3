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

void Lista::addFirst(int valor){

    Nodo *temp = new Nodo;
    temp->dato = valor;
    temp->next = NULL;

    if (cabeza == NULL){
        cabeza = temp;

    }else{

         temp->next = cabeza;
         cabeza = temp;

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

void Lista::deleteCollectorFirst(){


    if (headGC == NULL){ //es una comprobacion

        std::cout << "No hay espacios de memoria reutilizables disponibles" << std::endl;

    }else{ //esto es lo que deberia hacer el código como tal

        NodoGC *temp = new NodoGC;

        temp = headGC;
        headGC = headGC->next;

        //aqui es donde no se si se borra el nodeGC de la lista totalmente
        temp->next = NULL;
        temp->adress = NULL;



    }
}

Nodo *Lista::getCabeza() const {
    return cabeza;
}

void Lista::setCabeza(Nodo *cabeza) {
    Lista::cabeza = cabeza;
}

Nodo *Lista::getCola() const {
    return cola;
}

void Lista::setCola(Nodo *cola) {
    Lista::cola = cola;
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
