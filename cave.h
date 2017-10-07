#ifndef CAVE_H
#define CAVE_H
#include "./event.h"
class cave: public event{
   public:
      cave();
      virtual bool start();
      virtual void check_evolve(int, string, int &);
      virtual void evolve(int &, string);
};

#endif
