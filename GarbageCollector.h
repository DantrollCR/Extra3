//
// Created by dantroll on 12/03/19.
//

#ifndef EXTRA3_GARBAGECOLLECTOR_H
#define EXTRA3_GARBAGECOLLECTOR_H


#include <iostream>
#include "NodoGC.h"
#include "Lista.h"

class GarbageCollector {
private:
    bool isEmpty;

public:
    bool checkFree1();

    bool checkFree();

    //void vernodosGC();

    void clearHead();

    void setNewAddress(int *add);

    int *getFreeAddress();
};


#endif //EXTRA3_GARBAGECOLLECTOR_H
