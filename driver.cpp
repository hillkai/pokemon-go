/***************************
 * Program Filename: diver.cpp
 * Author: Kaitlin Hill
 * Date: 5/29/17
 * Descrption: Play Pokemon GO
 * Input: Size of board, what you want to do on your turn
 * Output: Pokemon game
 * **********************/
#include "./location.h"

/***************************
 * Function: check_size
 * Description: checks the size of the the world
 * Parameters: argv
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: size
 * *********************/
int check_size(char *argv[]){
   char a[256];
   int size;
   bool again;
   for(int i=0; i<256; i++){
      a[i] = argv[1][i];
   }
   size = atoi(a);
   do{
      if(size < 3){
      cout << "That won't be a big enough world. Enter an integer greater than 3" << endl;
      cin >> size;
      cin.ignore();
      again = true;
      }
      else{
	 again = false;
      }
   }while(again == true);   
   return size;
}
/***************************
 * Function: create grid
 * Description: creates the 2-D array
 * Parameters: size
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: a double location pointer
 * *********************/
location **create_grid(int size){
   location **l = new location*[size];
   for(int i=0; i<size; i++){
      l[i] = new location[size];
   }
   return l;
}
/***************************
 * Function: print_grid
 * Description: prints out grid
 * Parameters: l, size, loc_1, loc_2
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void print_grid(location **l, int size, int loc_1, int loc_2){
   for(int i=0; i<size; i++){
      for(int j=0; j<size; j++){
         #ifdef DEBUG
	 cout << l[i][j].get_eve_str();
         #endif
	 if((i == loc_1) && (j == loc_2))
	    cout << l[i][j].get_x();
      cout << " | ";
      }
      cout << endl;
      for(int k=0; k<2*size; k++){
	cout << " _ ";
      }
      cout << endl;
   }
}
/***************************
 * Function: give_random_locations
 * Description: gives random locations
 * Parameters: size, l, name, loc_1, loc_2
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void give_random_locations(int size, location **l, string name, int &loc_1, int &loc_2){
   bool good;
   int c;
   int d;
   do{
      c = rand() % size;
      d = rand() % size;
      if(l[c][d].get_eve_str() == "nothing"){
	 l[c][d].set_eve_str(name);
	 loc_1 = c;
	 loc_2 = d;
	 good = false;
      }
      else{
	 good = true;
      }
   }while(good == true);
}
/***************************
 * Function: give_random
 * Description: runs giving things random locations
 * Parameters: size, l, loc_1, loc_2
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void give_random(int size, location **l, int &loc_1, int &loc_2){
   int a = 0;
   int b= 0;
   give_random_locations(size, l, "professor", loc_1, loc_2);
   give_random_locations(size, l, "cave", a, b);
   give_random_locations(size, l, "pokestop", a, b);
   give_random_locations(size, l, "geodude", a, b);
   give_random_locations(size, l, "onix", a, b);
   give_random_locations(size, l, "charizard", a, b);
   give_random_locations(size, l, "rayquaza", a, b);
   give_random_locations(size, l, "mewtwo", a, b);
   give_random_locations(size, l, "espeon", a, b);
}
/***************************
 * Function: move_player
 * Description: moves the player to new location
 * Parameters: loc_1, size, loc_2
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void move_player(int &loc_1, int size, int &loc_2){
   char move;
   bool bad = true;
   do{
      cout << "Would you like to move up (press u), down (press d), right (press r), or left (press l)?" << endl;
      cin >> move;
      cin.ignore();
      if(move == 'u'){
	 if(loc_1-1 < 0){
	    cout << "Sorry, you can't move there" << endl; bad = true;
	 }
	 else{
	    loc_1 = loc_1 - 1; bad = false;
	 }
      }
      if(move == 'd'){
	 if(loc_1+1 >= size){
	    cout << "Sorry, you can't move there" << endl; bad = true;
	 }
	 else{
	    loc_1 = loc_1 + 1; bad = false;
	 }
      }
      if(move == 'r'){
	 if(loc_2+1 >= size){
	    cout << "Sorry, you can't move there" << endl; bad = true;
	 }
	 else{
	    loc_2 = loc_2 + 1; bad = false;
	 }
      }
      if(move == 'l'){
         if(loc_2-1 < 0){
	    cout << "Sorry, you can't move there" << endl; bad = true;
	 }
	 else{
	    loc_2 = loc_2 - 1; bad = false;
	 }
      }
   }while(bad == true);
}
/***************************
 * Function: help_near
 * Description: prints if anything is nearby
 * Parameters: loc_1, loc_2, l
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void help_near(int loc_1, int loc_2, location **l){
   if(l[loc_1][loc_2].get_eve_str() == "geodude"){
      cout << "Capture the " << l[loc_1][loc_2].get_eve_str() << " nearby" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "onix"){
      cout << "Capture the " << l[loc_1][loc_2].get_eve_str() << " nearby" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "charizard"){
      cout << "Capture the " << l[loc_1][loc_2].get_eve_str() << " nearby" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "rayquaza"){
      cout << "Capture the " << l[loc_1][loc_2].get_eve_str() << " nearby" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "mewtwo"){
      cout << "Capture the " << l[loc_1][loc_2].get_eve_str() << " nearby" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "espeon"){
      cout << "Capture the " << l[loc_1][loc_2].get_eve_str() << " nearby" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "pokestop"){
      cout << "Fill up on poke-balls" << endl;
   }
   else if(l[loc_1][loc_2].get_eve_str() == "cave"){
      cout << "You see a precious stone nearby" << endl;
   }
}
/***************************
 * Function: check_nearness
 * Description: checks if anything is nearby
 * Parameters: loc_1, size, loc_1, l
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void check_nearness(int loc_1, int size, int loc_2, location **l){
   loc_1 += 1;
   if(loc_1 < size){
      help_near(loc_1, loc_2, l);
   }
   loc_1 -= 2;
   if(loc_1 >= 0){
      help_near(loc_1, loc_2, l);
   }
   loc_1 += 1;
   loc_2 += 1;
   if(loc_2 < size){
      help_near(loc_1, loc_2, l);
   }
   loc_2 -= 2;
   if(loc_2 >= 0){
      help_near(loc_1, loc_2, l);
   }
}
/***************************
 * Function: move_pokemon
 * Description: moves pokemon to new location
 * Parameters: size, l, loc_1, loc_2
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: none
 * *********************/
void move_pokemon(int size, location **l, int loc_1, int loc_2){
   int c;
   int d;
   bool again;
   if(size > 3){
      do{
	 c = rand() % size;
	 d = rand() % size;
	 if(l[c][d].get_eve_str() == "nothing"){
	    l[c][d].set_eve_str(l[loc_1][loc_2].get_eve_str());
	    again = false;
	 }
	 else{
	    again = true;
	 }
      }while(again == true);
      l[loc_1][loc_2].set_eve_str("nothing");
   }
}
/***************************
 * Function: main
 * Description: runs program
 * Parameters: argc, argv
 * Pre-conditions: variable must have value
 * Post-conditions: variable has new value
 * Return: 0
 * *********************/
int main(int argc, char *argv[]){
   int size;
   location **l;
   int loc_1;
   int loc_2;
   char to_do;
   bool catch_1;
   bool winner;
   srand(time(NULL));
   cout << "Welcome to Pokemon Go!" << endl;
   size = check_size(argv);
   l = create_grid(size);
   give_random(size, l, loc_1, loc_2);
   print_grid(l, size, loc_1, loc_2);
   do{
   cout << "Would you like to see what's in your location (press l) or move on the board (press m)?" << endl;
   cin >> to_do;
   cin.ignore();
   if(to_do == 'l'){
      winner = l[loc_1][loc_2].start_location(catch_1);
      if(catch_1 == false){
	 move_pokemon(size, l, loc_1, loc_2);
      }
   }
   else if(to_do == 'm'){
      move_player(loc_1, size, loc_2);
      check_nearness(loc_1, size, loc_2, l);
      winner = false;
   }
   print_grid(l, size, loc_1, loc_2);
   }while(winner == false);
   for(int i=0; i<size; i++){
      delete [] l[i];
   }
   delete [] l;
   l = NULL;
   return 0;
}
