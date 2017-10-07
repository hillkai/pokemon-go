/***************************
 * Program Filename: pokestop.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./pokestop.h"
/***************************
 * Function: pokestop
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
pokestop::pokestop(){
   type = "pokestop";
}
/***************************
 * Function: start
 * Description: runs pokestop
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
bool pokestop::start(){
   int num;
   srand(time(NULL));
   num = (rand() % 8) + 3;
   cout << "You caught " << num << " pokeballs" << endl;
   num_pokeballs += num;
}
/***************************
 * Function: check_evolve
 * Description: none
 * Parameters: a, b, c
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void pokestop::check_evolve(int a, string b, int &c){
   cout << "We are in check_evolve in pokestop" << endl;
}
/***************************
 * Function: evolve
 * Description: none
 * Parameters: a, b
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void pokestop::evolve(int &a, string b){
   cout << "We are in evolve in pokestop" << endl;
}
