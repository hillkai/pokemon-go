#ifndef PSYCHIC_H
#define PSYCHIC_H
#include "./pokemon.h"

class psychic: public pokemon{
   public:
      psychic();
      virtual bool start();
      virtual void evolve(int &, string);
};


#endif
