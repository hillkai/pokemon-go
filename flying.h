#ifndef FLYING_H
#define FLYING_H
#include "./pokemon.h"

class flying: public pokemon{
   public:
      flying();
      virtual bool start();
      virtual void evolve(int &, string);
};

#endif
