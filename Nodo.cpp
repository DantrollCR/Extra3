//
// Created by dantroll on 12/03/19.
//

#include "Nodo.h"
#include "GarbageCollector.h"

GarbageCollector gc;


void *Nodo::operator new(size_t) {
    GarbageCollector gc;
    void *resp = gc.verificar();
    return resp;


    }



void Nodo::operator delete(void *ptrNodo) {
    gc.reciclar(static_cast<int *>(ptrNodo));
}


Nodo *Nodo::getNext() const {
    return next;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

int Nodo::getDato() const {
    return dato;
}

void Nodo::setDato(int dato) {
    Nodo::dato = dato;
}

