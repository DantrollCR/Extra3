//
// Created by dantroll on 12/03/19.
//

/**
 * @authors Daniel Acuña Mora, Josue Mata.
 */

#include "Nodo.h"
#include "GarbageCollector.h"

GarbageCollector gc;

/**
 * @brief Sobrecarga del metodo "new" de Nodo, esto para poder decidir que hacer a la hora de asignar memoria.
 *
 * @return un Nodo.
 */
void *Nodo::operator new(size_t) {
    GarbageCollector gc;
    void *resp = gc.verificar();
    return resp;


    }

/**
 * @brief Sobrecarga del metodo "new" de Nodo, esto para poder decidir que hacer a la hora de asignar memoria,
 * recibe un puntero de un nodo, para usar esa memoria y almacenarla en el GarbageCollector implementado.
 * @param ptrNodo (La direccion en memoria de un Nodo)
 *
 */

void Nodo::operator delete(void *ptrNodo) {
    gc.reciclar(static_cast<int *>(ptrNodo));
}

