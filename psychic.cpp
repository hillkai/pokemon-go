/***************************
 * Program Filename: psychic.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./psychic.h"
/***************************
 * Function: psychic
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
psychic::psychic(): pokemon(){
   type = "psychic";
}
/***************************
 * Function: start
 * Description: runs psychic
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: catch_1
 * *********************/
bool psychic::start(){
   int cap;
   bool catch_1;
   srand(time(NULL));
   if(num_pokeballs <= 0){
      cout << "Sorry, you can't try to catch a pokemon if you don't have pokeballs" << endl;
   }   
   else{
      cap = rand() % 100;
      if(cap < 25){
         if(type == "mewtwo"){
	    num_pokeballs -= 1;
	    num_mewtwo++;
	    cout << "You caught a mewtwo! You now have " << num_mewtwo << " mewtwos!" << endl;
	    check_evolve(num_mewtwo, "mewtwo", evolve_mewtwo);
	 }
	 else if(type == "espeon"){
	    num_pokeballs -= 1;
	    num_espeon++;
	    cout << "You caught an espeon! You now have " << num_espeon << " espeons!" << endl;
	    check_evolve(num_espeon, "espeon", evolve_espeon);
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
void psychic::evolve(int &a, string b){
   cout << "we are in evolve in psychic" << endl;
}
