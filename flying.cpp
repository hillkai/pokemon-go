/***************************
 * Program Filename: flying.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./flying.h"
/***************************
 * Function: flying
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
flying::flying(): pokemon(){
   type = "flying";
}
/***************************
 * Function: start
 * Description: runs flying pokemon
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: catch_1
 * *********************/
bool flying::start(){
   int cap;
   bool catch_1;
   srand(time(NULL));
   if(num_pokeballs <= 0){
      cout << "Sorry, you can't try to catch a pokemon if you don't have pokeballs" << endl;
   }   
   else{
      cap = rand() % 100;
      if(cap < 25){
         if(type == "charizard"){
	    num_pokeballs -= 1;
	    num_charizard++;
	    cout << "You caught a charizard! You now have " << num_charizard << " charizards!" << endl;
	    check_evolve(num_charizard, "charizard", evolve_charizard);
	 }
	 else if(type == "rayquaza"){
	    num_pokeballs -= 1;
	    num_rayquaza++;
	    cout << "You caught a rayquaza! You now have " << num_rayquaza << " rayquazas!" << endl;
	    check_evolve(num_rayquaza, "rayquaza", evolve_rayquaza);
	 }
	 catch_1 = true;
      }
      else{
	 num_pokeballs -= 1;
	 cout << "Sorry you did not catch a pokemon" << endl;
	 catch_1 = false;
      }
   }
      return catch_1;
}
/***************************
 * Function: evolve
 * Description: none
 * Parameters: a, b
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void flying::evolve(int &a, string b){
   cout << "we are in evolve in flying" << endl;
}
