//
// Created by Uriel Barbosa Pinheiro on 2019-08-26.
//

#ifndef A_STAR_TEMPLATE_STATE_H
#define A_STAR_TEMPLATE_STATE_H

#include <vector>

class State {
    int f; // g + h
    int g; // path up to here
    int h; // heuristic
public:
    State* parent;
    std::vector<State> succesors;
    //TODO: Add here the representation for a State of your problem

    int getF() const;
    void setF(int f);
    int getG() const;
    void setG(int g);
    int getH() const;
    void setH(int h);
    void set_costs(int g);
    State();
    bool is_final_state(std::vector<State> finalStates);
    void print_state();
    int calculate_heuristic();
    // TODO: May add more heuristics
    bool is_safe();
    std::vector<State> get_valid_states();
    bool check_ancestry(State *s);
    void add_succesor(State s);
    static State create_initial_state();
    static std::vector<State> create_final_states();
    /*
     * TODO: Add movement methods to calculate reachable States from this one
     * */
};


#endif //A_STAR_TEMPLATE_STATE_H
