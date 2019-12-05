//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#include "AStar.h"
#include "State.h"
#include <queue>
#include "HeapElement.h"

int AStar::run() {
    bool alreadyInClosed = false, alreadyInOpen = false;
    int openPosition, closedPosition;
    HeapElement auxHeapElement, aux2Heap;
    State auxState;

    this->initialState = State::create_initial_state();
    this->finalStates = State::create_final_states();

    if(finalStates.empty()) {
        return 1;
    }

    initialState.set_costs(0);

    auxHeapElement.key = initialState.getF();
    auxHeapElement.value = initialState;

    open.push(auxHeapElement);

    while(true) {
        if (open.empty()) {
            return 2;
        }
        auxHeapElement = open.top();
        open.pop();

        State closingNode = auxHeapElement.value;

        if (closingNode.is_final_state(this->finalStates)) {
            return 0;
        }

        closed.push_back(closingNode);

        std::vector<State> nodesInExpansion = closingNode.get_valid_states();
        for (State& i : nodesInExpansion) {
            if (! i.check_ancestry(&closingNode)) {
                closingNode.add_succesor(i);

                i.set_costs(closingNode.getG() + 1);

                //TODO: Continue...
                //TODO: Make extension of std::priority_queue to search for elements
            }
        }
    }

    return 0;
}

