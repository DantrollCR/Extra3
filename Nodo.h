//
// Created by dantroll on 12/03/19.
//

#ifndef EXTRA3_NODO_H
#define EXTRA3_NODO_H


#include <iostream>

class Nodo {
public:
    int dato;
    Nodo *next;

    void *operator new(size_t);

    void operator delete(void *memoria);
};


#endif //EXTRA3_NODO_H
