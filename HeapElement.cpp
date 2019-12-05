//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#include "HeapElement.h"

bool operator>(const HeapElement &l, const HeapElement &r) {
    return l.key > r.key;
}
