//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#ifndef A_STAR_TEMPLATE_ASTAR_H
#define A_STAR_TEMPLATE_ASTAR_H


#include <queue>
#include "HeapElement.h"
#include "State.h"

class AStar {
    bool alreadyInClosed = false, alreadyInOpen = false;
    State *initialState, **finalStates, *outputState;
    std::priority_queue<HeapElement, std::vector<HeapElement>, std::greater<>> open;
    State **closed;
    HeapElement auxHeap, aux2Heap;
    State *auxState;
public:
    int myVal;
    AStar();
    int run();
};


#endif //A_STAR_TEMPLATE_ASTAR_H
