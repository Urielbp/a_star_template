//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#ifndef A_STAR_TEMPLATE_HEAPELEMENT_H
#define A_STAR_TEMPLATE_HEAPELEMENT_H

#include "State.h"

typedef int heapKeyType;
typedef State heapValueType;

class HeapElement {
public:
    heapKeyType key;
    heapValueType value;
};

bool operator>(const HeapElement &l, const HeapElement &r);

#endif //A_STAR_TEMPLATE_HEAPELEMENT_H
