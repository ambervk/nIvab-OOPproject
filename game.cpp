#include <iostream> 
#include <cstdlib>

#include "game.h"
#include "player.h"
//#include "enemy.h"


void Game::game(){
	bool condition = false  ;
	int diff ; 
	while(condition == false){
		std::cout<<"Press 1 for easy difficulty. Press 2 for hard difficulty" <<std::endl ; 
		std::cin << diff << std::endl ; 
		
		if(diff!=1 || diff!=2){
			cout<<"Please enter only the number 1 or the number 2 to set your difficulty" << endl ; 
		}
		else{
			condition == true ;
		}
	}
	difficulty = diff
} ; 
