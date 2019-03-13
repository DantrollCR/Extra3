
#include "Lista.h"

//https://github.com/DantrollCR/Extra3

int main() {
    Lista ls;
    Lista *lc;
    ls.addEnd(5);
    ls.addEnd(7);
    ls.addEnd(9);
    ls.addEnd(8);
    ls.vernodos();
    ls.delete_first();
    ls.delete_first();
    ls.addEnd(7);
    ls.vernodos();



    return 0;
}