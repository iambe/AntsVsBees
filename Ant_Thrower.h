//
// Created by AM on 10/29/2020.
//

#ifndef ANTSVSBEES_ANT_THROWER_H
#define ANTSVSBEES_ANT_THROWER_H

#include <iostream>
#include "Ant.h "
#include "BugBoard.h"

class Ant_Thrower : public Ant{

    ~Ant_Thrower();
    Ant_Thrower & operator=(Ant_Thrower & right);

    void die() override ;

    void attack();
    std::string print() override;
public:
    Ant_Thrower();
    Ant_Thrower(int pos);
    static const int cost = 3;
};


#endif //ANTSVSBEES_ANT_THROWER_H
