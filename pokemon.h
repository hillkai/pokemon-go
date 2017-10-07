#ifndef POKEMON_H
#define POKEMON_H
#include "./event.h"

class pokemon: public event{
   protected:
      pokemon *p;
   public:
      pokemon();
      virtual bool start();
      void check_evolve(int, string, int &);
      virtual void evolve(int &, string); 
};


#endif
