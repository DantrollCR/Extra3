//
// Created by dantroll on 12/03/19.
//

#include "Nodo.h"
#include "GarbageCollector.h"

GarbageCollector gc;


void *Nodo::operator new(size_t) {
    //aqui se busca si hay un espacio libre en memoria de la lista del GC
    //si no se crea el nodo en uno nuevo
    if (gc.checkFree() == true) {
        void *nodo = ::new Nodo();
        return nodo;
    } else {
        std::cout << "Había memoria libre y se la di." << std::endl;
        int *dir = gc.getFreeAddress();
        Nodo *node = reinterpret_cast<Nodo *>(dir);
        gc.clearHead();
        return node;


    }

}


void Nodo::operator delete(void *ptrNodo) {

    gc.setNewAddress(static_cast<int *>(ptrNodo));
    free(ptrNodo);


    /*}else{

        Nodo *temp = ls.getCabeza();
        while(temp->getNext() != ptrNodo){
            temp = temp->getNext();
        }
        //aqui se cambia la direccion del siguiente
        temp->next = temp->next->next;
        gc.setNewAddress(ptrNodo); //aqui como el puntero es tipo int me tira error y el delete es tipo void xD
        //aqui es donde se supone esta direccion en memoria se almacena en el colector y ahi su valor se hace NULL

*/
    }

    //se almacena el puntero en la lista del GC
    //se elimina el nodo en la dirección del puntero
/*    if (gc.checkFree1() == true) {
        std::cout << "Estoy vacia peerrrroooo" << std::endl;
        gc.setNewAddress(static_cast<int *>(ptrNodo));

    } else {
        std::cout << "Estoy llena peerrrroooo, y la memoria es: " << std::endl;
        gc.getFreeAddress();

    }*/



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
