//
// Created by dantroll on 12/03/19.
//

#ifndef EXTRA3_NODOGC_H
#define EXTRA3_NODOGC_H


class NodoGC {
private:
    int dato;
public:
    bool isfree = false;
    int *adress;
    NodoGC *next;


};


#endif //EXTRA3_NODOGC_H
