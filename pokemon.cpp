/***************************
 * Program Filename: pokemon.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./rock.h"
#include "./flying.h"
#include "./psychic.h"
#include "./pokemon.h"
/***************************
 * Function: pokemon
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
pokemon::pokemon(){
   p = NULL;
   type = "nothing"; 
}
/***************************
 * Function: start
 * Description: runs what pokemon we are going to catch
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: catch_1
 * *********************/
bool pokemon::start(){
   bool catch_1;
   if(type == "geodude" || type == "onix"){
      p = new rock;
      p->set_type(type);
      catch_1 = p->start();
      delete p; p = NULL;
   }
   else if(type == "rayquaza" || type == "charizard"){
      p = new flying;
      p->set_type(type);
      catch_1 = p->start();
      delete p; p = NULL;
   }
   else if(type == "mewtwo" || type == "espeon"){
      p = new psychic;
      p->set_type(type);
      catch_1 = p->start();
      delete p; p = NULL;
   }
   return catch_1;
}
/***************************
 * Function: check_evolve
 * Description: says we evolved
 * Parameters: num, name, evolve
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void pokemon::check_evolve(int num, string name, int &evolve){
   if(num == 2){
      cout << name << " has evolved to stage 1!" << endl;
      evolve = 1;
   } 
}
/***************************
 * Function: evolve
 * Description: none
 * Parameters: a, b
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void pokemon::evolve(int &a, string b){
   cout << "we are in evolve in pokemon" << endl;
}
