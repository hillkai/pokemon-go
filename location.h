#ifndef LOCATION_H
#define LOCATION_H
#include "./event.h"
#include "./pokemon.h"
#include "./rock.h"
#include "./flying.h"
#include "./psychic.h"
#include "./pokestop.h"
#include "./cave.h"

class location{
   private:
      string eve_str;
      char x;
      event *e;
   
   public:
      location();
      void set_eve_str(string);
      string get_eve_str();
      void set_x(char);
      char get_x();
      void set_e(event *e);
      event* get_e();

      bool check_winner();
      bool start_location(bool &);
};

#endif
