#include <iostream> 
#include <cstdlib>

#include "game.h"
#include "player.h"
//#include "enemy.h"

void game::printBoard(int posArr[7][2]){
// input the 2d array of all possible characters on the board 
// first row is ALWAYS the players cooridinates X and Y
// second and third row are for two enemyOneEasy
// fourth and fifth rows are for enemyTwoEasy
// six and seventh rows are for enemyHard
// if changing difficulty jus assign number > 12 to position row 
// posArr = {{x.y}, {x,y},...}

	for(int i = 0 ; i < 12 ; i++){
		for(int j = 0 ; j < 12 ; j++){
			if(i == posArr[0][0] && j == posArr[0][1]){
				std::cout << "X"  ; 
			}
			else if(i == posArr[1][0] && j == posArr[1][1]){
				std::cout<< "*" ; 
			}
			else if(i == posArr[2][0] && j == posArr[2][1]){
			 std::cout << "*" ; 
			}
			else if(i == posArr[3][0] && j == posArr[3][1]){
				std::cout << "@" ; 
			}
			else if(i == posArr[4][0] && j == posArr[4][1]){
				std::cout << "@" ; 
			}
			else if(i == posArr[5][0] && j==posArr[5][1]){
				std::cout << "#" ; 
			}
			else if (i == posArr[6][0] && j == posArr[6][1]){
				std::cout << "#" ; 
			}
			else{
				std::cout << " " ; 
			}
	}

}; 


