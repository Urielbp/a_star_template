#include <iostream>
#include "AStar.h"

int main() {
    AStar instance;
    int result = instance.run();
    switch(result) {
        case 0:
            std::cout << "Solution found\nThis is the path" << std::endl;
            for (State& i : instance.solution) {
                i.print_state();
            }
            return 0;
        case 1:
            std::cout << "No final states could be generated" << std::endl;
            return 1;
        case 2:
            std::cout << "Dead end reached, the final states could not be reached from the initial state" << std::endl;
            return 2;
        default:
            std::cout << "Unknown return value" << std::endl;
            return 10;
    }
}