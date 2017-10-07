#ifndef ROCK_H
#define ROCK_H
#include "./pokemon.h"

class rock: public pokemon{
   public:
      rock();
      virtual bool start();
      virtual void evolve(int &, string);
};
#endif
