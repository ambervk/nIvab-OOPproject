#include <iostream>
#include "game.cpp"


int main() {
	game *thisGame; //create the game
	 
	//Title screen to choose difficulty
	// -----------------------------------------
	bool condition = false ;
	int *diff ; 

	while(condition == false){
		std::cout<<"Press 1 for easy difficulty. Press 2 for hard difficulty" <<std::endl ; 
		std::cin >> *diff ; 
		
		if(*diff!=1 || *diff!=2){
			cout<<"Please enter only the number 1 or the number 2 to set your difficulty" << endl ; 
		}
		else{
			condition == true ;
		}
	// -----------------------------------------

	thisGame = new game(*diff) ; 

 (*thisGame).gameOver = false ; 

//-------------------------------------------
//MAIN DRIVER OF THE GAME
//------------------------------------------ 
	while( (*thisGame).gameOver == false){
		

	}
//-------------------------------------------
	return 0 ; 
}
}