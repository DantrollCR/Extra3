//
// Created by dantroll on 12/03/19.
//

#include "Nodo.h"
#include "GarbageCollector.h"

GarbageCollector gc;


void *Nodo::operator new(size_t) {

    if (gc.checkFree() == true) {
        void *nodo = ::new Nodo();
        return nodo;
    }

}

void Nodo::operator delete(void *Nodo) {
/*    if (gc.checkFree1() == true) {
        std::cout << "Estoy vacia peerrrroooo" << std::endl;
        gc.setNewAddress(static_cast<int *>(Nodo));

    } else {
        std::cout << "Estoy llena peerrrroooo, y la memoria es: " << std::endl;
        gc.getFreeAddress();

    }*/
    free(Nodo);

}