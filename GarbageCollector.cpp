//
// Created by dantroll on 12/03/19.
//

#include "GarbageCollector.h"

static Lista *lista = new Lista;

void GarbageCollector::setNewAddress(int *add) {
    lista->addCollectorEnd(add);
}


bool GarbageCollector::checkFree() {

    if (lista->getHeadGC() == NULL){

        return true;
    }else{
        return false;
    }


}

/*void GarbageCollector::vernodosGC() {
    lista->vernodosGC();
}*/

bool GarbageCollector::checkFree1() {
    return false;
}

int *GarbageCollector::getFreeAddress() {
    lista->getHeadGC()->getAdress();
}

void *GarbageCollector::verificar() { //verificar si hay algun espacio reciclado que se le pueda asignar
    if (lista->getHeadGC() != NULL) { //si hay espacio reciclado

        int *address = getFreeAddress();
        printf("Si hay memoria para reciclar, y es: %p \n", address);
        //std::cout << "!Si hay espacio para reciclar!" <<std::endl;
        Nodo *node = reinterpret_cast<Nodo *>(address); //nodo en direccion especifica
        lista->deleteCollectorFirst();
        return node;
    } else {
        std::cout << "No hay espacio para reciclar :(" << std::endl;
        void *node = ::new Nodo();
        return node;
    }


}

void GarbageCollector::reciclar(int *direccion) {
    lista->addCollectorEnd(direccion);

}
