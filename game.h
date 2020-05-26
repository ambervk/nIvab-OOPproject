
#ifndef GAME_H
#define GAME_H

#include <iostream>


class game{
  int difficulty ; 
  void resetBoard() ; 
	char userInput ; 
	void printBoard() ; 
	
public:
	game(int diff); //default constructor 
	~game() ; //destructor class 
	bool gameOver ; 

}



#endif //PLAYER_H