/***************************
 * Program Filename: rock.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./rock.h"
/***************************
 * Function: rock
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
rock::rock():pokemon(){
   type = "rock";
}
/***************************
 * Function: start
 * Description: starts rock
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: catch_1
 * *********************/
bool rock::start(){
   int cap;
   bool catch_1;
   srand(time(NULL));
   if(num_pokeballs <= 0){
      cout << "Sorry, you can't try to catch a pokemon if you don't have pokeballs" << endl;
   }   
   else{
      cap = rand() % 100;
      if(cap < 25){
         if(type == "geodude"){
	    num_pokeballs -= 1;
	    num_geodude++;
	    cout << "You caught a geodude! You now have " << num_geodude << " geodudes!" << endl;
	    check_evolve(num_geodude, "geodude", evolve_geodude);
	 }
	 else if(type == "onix"){
	    num_pokeballs -= 1;
	    num_onix++;
	    cout << "You caught an onix! You now have " << num_onix << " onixes!" << endl;
	    check_evolve(num_onix, "onix", evolve_onix);
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
void rock::evolve(int &a, string b){
   cout << "we are in evolve in rock" << endl;
}
