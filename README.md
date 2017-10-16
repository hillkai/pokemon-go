# pokemon-go
This is a spin-off version of the game Pokemon Go! The goal of this game is to catch them all. There are six Pokemon total to catch. You 
must catch the Pokemon twice to evolve them to stage 1. If you try to catch a Pokemon and you don't capture it, it will fly away to another 
place on the board. After that, you'll want to make your way to the cave. There they will evolve from stage 1 to stage 2. After you have 
evolved them to stage 2, you want to go back to the original place you started the game aka where the professor is. There it will check to 
make sure you caught and evolved all the pokemon. If you did it will print a winner message, but if you didn't, the game will keep going. 

This game has two versions. You can choose which version you would like to play when you run the makefile. To play the regular version, 
just type make. This will print a blank chart with an x to show you your location. As you move around the board, messages will print to 
tell you what is nearby, but won't tell you what is in your location. You can also play this game in debug version. In debug version, it 
will print a board with the name of what is in each location. Also, every pokemon is already evolved to stage 1, so the only thing you have 
to do is go to the cave and then back to the professor to win the game. If you want to run the debug version, run make -D DEBUG. To play 
either version, a command line argument is needed to determine the size of the chart to use. The chart must be 3x3 or larger. Once you run 
the makefile (in either version), it will make an executable called poke. Ex: poke 4

This game explores Polymorphism and Inheritance. The Pokemon inherit from whatever type they are, but at a broader sense, they inherit from 
Pokemon class. Polymorphism is helpful because the user picks a spot on the board, but we don't necessarily know what Pokemon they will
land on. 
