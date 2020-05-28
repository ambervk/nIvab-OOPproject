
#ifndef GAME_H
#define GAME_H

#include <iostream>


class game{
 	// void resetBoard() ; 
		char gameBoard[12][12];  // xx
		int posArr[7][2]; 
	public:
 	 int difficulty ;   // xx
		game(int diff); // xx //default constructor
		bool gameOver ; // xx 
		void printBoard(int posArr[7][2]) ;  
		~game() ; 
};



#endif //PLAYER_H