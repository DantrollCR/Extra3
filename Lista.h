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

    Nodo *getCabeza() const;
    void setCabeza(Nodo *cabeza);

    Nodo *getCola() const;
    void setCola(Nodo *cola);

    NodoGC *getHeadGC() const;
    void setHeadGC(NodoGC *headGC);

    NodoGC *getTailGC() const;
    void setTailGC(NodoGC *tailGC);

public:
    Lista(); //constructor

    void delete_last();

    void addEnd(int valor);

    void addCollectorEnd(int *address);

    void createnode(int value);

    void vernodos();

    void addFirst(int valor);

    void deleteCollectorFirst();
};

#endif //EXTRA3_LISTA_H
