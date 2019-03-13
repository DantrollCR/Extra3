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
    }


}

bool GarbageCollector::checkFree1() {
    return false;
}

int *GarbageCollector::getFreeAddress() {

}

