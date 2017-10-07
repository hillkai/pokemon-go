#ifndef POKESTOP_H
#define POKESTOP_H
#include "./event.h"
class pokestop: public event{
   public:
      pokestop();
      virtual void check_evolve(int, string, int &);
      virtual void evolve(int &, string);
      virtual bool start();
};

#endif
