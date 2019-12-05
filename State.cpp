//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#include <iostream>
#include "State.h"


inline bool operator==(const State& l, const State& r) {
    /*
     * TODO: Add user defined behaviour
     * Comparison should be between the used defined part of a State
     * */
    return true;
}

State::State() {
    // Constructor
    f = 0;
    g = 0;
    h = 0;
    parent = nullptr;
}

bool State::is_final_state(std::vector<State> finalStates) {
    for(State& i : finalStates){
        if (*this == i) {
            return true;
        }
    }
    return false;
}

void State::print_state() {
    /*
     * TODO: Add user defined behaviour
     * Print the used defined part of a State
     * */
}

int State::calculate_heuristic() {
    /*
    * TODO: Add user defined behaviour
    * Return the heuristic of a State
    * The lower the value, the closer to the solution
    * */
    return 0;
}

bool State::is_safe() {
    /*
     * TODO: Add user defined behaviour
     * Check if a state is safe
     * */
    return false;
}

std::vector<State> State::get_valid_states() {
    std::vector<State> result;
    /*
    * TODO: Add user defined behaviour
    * Add reachable States from this state to "result"
    * */
    return result;
}

bool State::check_ancestry(State *s) {
    if(s->parent == nullptr){
        return false;
    }

    if(*s->parent == *this) {
        return true;
    }
    return (check_ancestry(s->parent));
}

void State::add_succesor(State s) {
    this->succesors.push_back(s);
}

State State::create_initial_state() {
    State initialState;
    /*
     * TODO: Add user defined behaviour
     * Return initial State
     * */
    return initialState;
}

std::vector<State> State::create_final_states() {
    std::vector<State> finalStates;
    /*
    * TODO: Add user defined behaviour
    * Create and add final States (or just 1) to finalStates
    * */
    return finalStates;
}

int State::getF() const {
    return f;
}

void State::setF(int f) {
    this->f = f;
}

int State::getG() const {
    return g;
}

void State::setG(int g) {
    this->g = g;
}

int State::getH() const {
    return h;
}

void State::setH(int h) {
    this->h = h;
}

void State::set_costs(int g) {
    this->g = g;
    this->h = this->calculate_heuristic();
    this->f = this->g + this->h;
}
