#ifndef ANT_HPP
#define ANT_HPP
#include "Critter.hpp"

class Ant: public Critter
{
  public:
    Ant();
    virtual void move(char**, int, int);
    virtual void breed(char**, int, int);
};

#endif
