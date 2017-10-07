#ifndef EVENT_H
#define EVENT_H
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class event{
   protected:
      string type;
      static int num_geodude;
      static int num_onix;
      static int num_charizard;
      static int num_rayquaza;
      static int num_mewtwo;
      static int num_espeon;
      static int num_pokeballs;
      static int evolve_geodude;
      static int evolve_onix;
      static int evolve_charizard;
      static int evolve_rayquaza;
      static int evolve_mewtwo;
      static int evolve_espeon; 

   public:
      void set_type(string);
      string get_type();
      static void set_num_geodude(int);
      static int get_num_geodude();
      static void set_num_onix(int);
      static int get_num_onix();
      static void set_num_charizard(int);
      static int get_num_charizard();
      static void set_num_rayquaza(int);
      static int get_num_rayquaza();
      static void set_num_mewtwo(int);
      static int get_num_mewtwo();
      static void set_num_espeon(int);
      static int get_num_espeon();
      static void set_num_pokeballs(int);
      static int get_num_pokeballs();
      static void set_evolve_geodude(int);
      static int get_evolve_geodude();
      static void set_evolve_onix(int);
      static int get_evolve_onix();
      static void set_evolve_charizard(int);
      static int get_evolve_charizard();
      static void set_evolve_rayquaza(int);
      static int get_evolve_rayquaza();
      static void set_evolve_mewtwo(int);
      static int get_evolve_mewtwo();
      static void set_evolve_espeon(int);
      static int get_evolve_espeon();
      
      virtual bool start()=0;
      virtual void check_evolve(int, string, int&)=0;
      virtual void evolve(int &, string)=0;
};

#endif
