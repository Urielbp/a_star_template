//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#ifndef A_STAR_TEMPLATE_ASTAR_H
#define A_STAR_TEMPLATE_ASTAR_H


#include <queue>
#include <vector>
#include "HeapElement.h"
#include "State.h"

class AStar {
    State initialState, outputState;
    std::vector<State> finalStates;
    std::priority_queue<HeapElement, std::vector<HeapElement>, std::greater<HeapElement>> open;
    std::vector<State> closed;

public:
    int run();
    std::vector<State> solution;
};


#endif //A_STAR_TEMPLATE_ASTAR_H
