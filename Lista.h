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
    Nodo *head, *tail;
    NodoGC *headGC, *tailGC;

public:


    NodoGC *getHeadGC();
    void setHeadGC(NodoGC *headGC);

    NodoGC *getTailGC() const;
    void setTailGC(NodoGC *tailGC);

    Lista(); //constructor

    void delete_last();

    void delete_first();

    void addFirst(int valor);

    void addLast(int valor);

    void addCollectorEnd(int *address);

    void vernodos();

    void vernodosGC();


    void printCollector();

    void deleteCollectorFirst();
//
//    void deleteCollectorEnd();

};

#endif //EXTRA3_LISTA_H
