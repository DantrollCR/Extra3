//
// Created by dantroll on 12/03/19.
//

#include "GarbageCollector.h"

static Lista *lista = new Lista;

/**
 * Funcion encargada de establecer una nueva dirección de memoria
 * para agregarla a lista de memorias para reciclar
 * @param add direccion de memoria a almacenar
 */
void GarbageCollector::setNewAddress(int *add) {
    lista->addCollectorEnd(add);
}

/**
 * Funcion que revisa si la lista de memorias para reciclar tiene elementos
 * @return
 */
bool GarbageCollector::checkFree() {

    if (lista->getHeadGC() == NULL){

        return true;
    }else{
        return false;
    }


}


}

int *GarbageCollector::getFreeAddress() {
    lista->getHeadGC()->getAdress();
}

/**
 * Funcion que verifica si hay memorias disponibles dentro de la lista
 * para reciclar y asignarselas al nodo que se este agregando en la lista
 * @return
 */
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


/**
 * funcion encargada de llamar a la funcion para agregar una dirección de memoria disponible
 * para reciclar a la lista del GarbageCollector
 * @param direccion : dirección de memoria
 */
void GarbageCollector::reciclar(int *direccion) {
    lista->addCollectorEnd(direccion);

}
