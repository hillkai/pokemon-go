/***************************
 * Program Filename: event.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./event.h"   
   
int event::num_geodude = 0;
int event::num_onix = 0;
int event::num_charizard = 0;
int event::num_rayquaza = 0;
int event::num_mewtwo = 0;
int event::num_espeon = 0;
int event::num_pokeballs = 50;
int event::evolve_geodude = 0;
int event::evolve_onix = 0;
int event::evolve_charizard = 0;
int event::evolve_rayquaza = 0;
int event::evolve_mewtwo = 0;
int event::evolve_espeon = 0;
/***************************
 * Function:set_type
 * Description: setter
 * Parameters: type
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_type(string type){
   this->type = type;
}
/***************************
 * Function: get_type
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
string event::get_type(){
   return type;
}
/***************************
 * Function: set_num_geodude
 * Description: setter
 * Parameters: numgeodude
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_geodude(int numgeodude){
   num_geodude = numgeodude;   
}
/***************************
 * Function: get_num_geodude
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: num_geodude
 * *********************/
int event::get_num_geodude(){
   return num_geodude;
}
/***************************
 * Function: set_num_onix
 * Description: setter
 * Parameters: numonix
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_onix(int numonix){
   num_onix = numonix;
}
/***************************
 * Function: get_num_onix
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: num_onix
 * *********************/
int event::get_num_onix(){
   return num_onix;
}
/***************************
 * Function: set_num_charizard
 * Description: setter
 * Parameters: numcharizard
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_charizard(int numcharizard){
   num_charizard = numcharizard;
}
/***************************
 * Function: get_num_charizard
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: num_charizard
 * *********************/
int event::get_num_charizard(){
   return num_charizard;
}
/***************************
 * Function: set_num_rayquaza
 * Description: setter
 * Parameters: numrayquaza
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_rayquaza(int numrayquaza){
   num_rayquaza = numrayquaza;
}
/***************************
 * Function: get_num_rayquaza
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: num_rayquaza
 * *********************/
int event::get_num_rayquaza(){
   return num_rayquaza;
}
/***************************
 * Function: set_num_mewtwo
 * Description: setter
 * Parameters: nummewtwo
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_mewtwo(int nummewtwo){
   num_mewtwo = nummewtwo;
}
/***************************
 * Function: get_num_mewtwo
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: num_mewtwo
 * *********************/
int event::get_num_mewtwo(){
   return num_mewtwo;
}
/***************************
 * Function: set_num_espeon
 * Description: setter
 * Parameters: numespeon
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_espeon(int numespeon){
   num_espeon = numespeon;
}
/***************************
 * Function: get_num_espeon
 * Description: getter
 * Parameters: num_espeon
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: num_espeon
 * *********************/
int event::get_num_espeon(){
   return num_espeon;
}
/***************************
 * Function: set_num_pokeballs
 * Description: setter
 * Parameters: numpokeballs
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_num_pokeballs(int numpokeballs){
   num_pokeballs = numpokeballs;
}
/***************************
 * Function: get_num_pokeballs
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
int event::get_num_pokeballs(){
   return num_pokeballs;
}
/***************************
 * Function: set_evolve_geodude
 * Description: setter
 * Parameters: evolvegeodude
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return:
 * *********************/
void event::set_evolve_geodude(int evolvegeodude){
   evolve_geodude = evolvegeodude;
}
/***************************
 * Function: get_evolve_geodude
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: evolve_geodude
 * *********************/
int event::get_evolve_geodude(){
   return evolve_geodude;
}
/***************************
 * Function: set_evolve_onix
 * Description: setter
 * Parameters: evolveonix
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_evolve_onix(int evolveonix){
   evolve_onix = evolveonix;
}
/***************************
 * Function: get_evolve_onix
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: evolve_onix
 * *********************/
int event::get_evolve_onix(){
   return evolve_onix;
}
/***************************
 * Function: set_evolve_charizard
 * Description: setter
 * Parameters: evolvecharizard
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_evolve_charizard(int evolvecharizard){
   evolve_charizard = evolvecharizard;
}
/***************************
 * Function: get_evolve_charizard
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: evolve_charizard
 * *********************/
int event::get_evolve_charizard(){
   return evolve_charizard;
}
/***************************
 * Function: set_evolve_rayquaza
 * Description: setter
 * Parameters: evolverayquaza
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_evolve_rayquaza(int evolverayquaza){
   evolve_rayquaza = evolverayquaza;
}
/***************************
 * Function: get_evolve_rayquaza
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: evolve_rayquaza
 * *********************/
int event::get_evolve_rayquaza(){
   return evolve_rayquaza;
}
/***************************
 * Function: set_evolve_mewtwo
 * Description: setter
 * Parameters: evolve_mewtwo
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void event::set_evolve_mewtwo(int evolvemewtwo){
   evolve_mewtwo = evolvemewtwo;
}
/***************************
 * Function: get_evolve_mewtwo
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: evolve_mewtwo
 * *********************/
int event::get_evolve_mewtwo(){
   return evolve_mewtwo;
}
/***************************
 * Function: set_evolve
 * Description: setter
 * Parameters: evolveespeon
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none 
 * *********************/
void event::set_evolve_espeon(int evolveespeon){
   evolve_espeon = evolveespeon;
}
/***************************
 * Function: get_evolve_espeon
 * Description: getter
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: evolve_espeon
 * *********************/
int event::get_evolve_espeon(){
   return evolve_espeon;
}
