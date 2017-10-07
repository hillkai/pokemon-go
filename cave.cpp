/***************************
 * Program Filename: cave.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./cave.h"
/***************************
 * Function: cave
 * Description: constructor
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
cave::cave(){
   type = "cave";
}
/***************************
 * Function: start
 * Description: runs the cave class
 * Parameters: none
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
bool cave::start(){
   #ifdef DEBUG 
   evolve_onix = 1;
   evolve_geodude = 1;
   evolve_charizard = 1;
   evolve_rayquaza = 1;
   evolve_mewtwo = 1;
   evolve_espeon = 1;
   #endif
   cout << "You found a cave and a precious stone" << endl;
   evolve(evolve_geodude, "geodude");
   evolve(evolve_onix, "onix");
   evolve(evolve_charizard, "charizard");
   evolve(evolve_rayquaza, "rayquaza");
   evolve(evolve_mewtwo, "mewtwo");
   evolve(evolve_espeon, "espeon");
}
/***************************
 * Function: evolve
 * Description: evolves pokemon
 * Parameters: evolve, name
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void cave::evolve(int &evolve, string name){
   if(evolve == 1){
      evolve = 2;
      cout << name << " has evolved to stage 2!" << endl;
   }
}
/***************************
 * Function: check_evolve
 * Description: none
 * Parameters: a, b, c
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void cave::check_evolve(int a, string b, int &c){
   cout << "we are in check_evolve in cave" << endl;
}
