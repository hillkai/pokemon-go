/***************************
 * Program Filename: location.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./location.h"

/***************************
 * Function: location
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
location::location(){
   eve_str = "nothing"; 
   x = 'x';
   e = NULL;
}
 /***************************
 * Function: set_eve_str
 * Description: setter
 * Parameters: eve_str
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/     
void location::set_eve_str(string eve_str){
   this->eve_str = eve_str;
}
 /***************************
 * Function: get_eve_str
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: eve_str
 * *********************/     
string location::get_eve_str(){
   return eve_str;
}
  /***************************
 * Function: set_x
 * Description: setter
 * Parameters: x
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/    
void location::set_x(char x){
   this->x = x;
}
   /***************************
 * Function: get_x
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: x
 * *********************/   
char location::get_x(){
   return x;
}
/***************************
 * Function: set_e
 * Description: setter
 * Parameters: e
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void location::set_e(event *e){
   this->e = e;
}
/***************************
 * Function: get_e
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: e
 * *********************/
event* location::get_e(){
   return e;
}
 /***************************
 * Function: check_winner
 * Description: checks to see if user won
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: win
 * *********************/     
bool location::check_winner(){
   int winner = 0;
   bool win;
   if(event::get_evolve_geodude() == 2)
      winner++;
   if(event::get_evolve_onix() == 2)
      winner++;
   if(event::get_evolve_charizard() == 2)
      winner++;
   if(event::get_evolve_rayquaza() == 2)
      winner++;
   if(event::get_evolve_mewtwo() == 2)
      winner++;
   if(event::get_evolve_espeon() == 2)
      winner++;
   if(winner == 6){
      cout << "You caught them all!!! Congratulations, you won the game!" << endl;
      win = true;
   }
   else{
      cout << "Sorry, you haven't quite caught them all, keep going!" << endl;
      win = false;
   }
   return win;
}
  /***************************
 * Function: start_location
 * Description: runs location class
 * Parameters: catch_1
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: winner
 * *********************/    
bool location::start_location(bool &catch_1){
   bool winner;
   catch_1 = true;
   if(eve_str == "pokestop"){
      e = new pokestop;
      e->set_type(eve_str);
      e->start();
      delete e; e = NULL;
      winner = false;
   }
   else if(eve_str == "cave"){
      e = new cave;
      e->set_type(eve_str);
      e->start();
      delete e; e = NULL;
      winner = false;
   }
   else if(eve_str == "nothing"){
      winner = false;
   }
   else if(eve_str == "professor"){
      winner = check_winner();
   }
   else{
      e = new pokemon;
      e->set_type(eve_str);
      catch_1 = e->start();
      delete e; e = NULL;
      winner = false;
   }
   return winner;
}
