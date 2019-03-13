//
// Created by dantroll on 12/03/19.
//

#ifndef EXTRA3_LISTA_H
#define EXTRA3_LISTA_H

#include <iostream>
#include "Nodo.h"
#include "NodoGC.h"

class Lista {
private:
    Nodo *cabeza, *cola;
    NodoGC *headGC, *tailGC;
public:
    Lista();

    void delete_last();

    void addEnd(int valor);

    void addCollectorEnd(int *address);

    void createnode(int value);

    void vernodos();
};

#endif //EXTRA3_LISTA_H
