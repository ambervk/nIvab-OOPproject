#include "enemy.h"
#include "game.cpp"
#include "player.cpp"

#include <iostream> ;

int main() {
    game *thisGame; //create the game

    //Title screen to choose difficulty
    // -----------------------------------------
    bool condition = false;
    int *diff;

    while (condition == false) {
        std::cout << "Press 1 for easy difficulty. Press 2 for hard difficulty" << std::endl;
        std::cin >> *diff;

        if (*diff != 1 || *diff != 2) {
            cout << "Please enter only the number 1 or the number 2 to set your difficulty" << endl;
        } else {
            condition == true;
        }
   

        //-------------------------------------------------------------
        //MAIN DRIVER OF THE GAME
        //------------------------------------------------------------

        thisGame = new game(*diff);

        (*thisGame).gameOver = false;
		
		player user ; 

        while ((*thisGame).gameOver == false) {

            if ((*thisGame).difficulty = 1) {
				//generate the enemies here according to what we set the difficulty as 
  
                enemyOneEasy enemyOne, enemyTwo ;
				enemyTwoEasy enemyThree, enemyFour ; 

				enemyOne.x = 2 ; 
				enemyOne.y = 2 ; 

				enemyTwo.x = 4 ; 
				enemyTwo.y = 4 ; 

				enemyThree.x = 2 ; 
				enemyThree.y = 8 ; 

				enemyFour.x =  10 ; 
				enemyFour.y = 10 ; 

				int posArr[7][7] = {{enemyOne.x, enemyOne.y},{enemyTwo.x,enemyTwo.y},{enemyThree.x,enemyThree.y}, {enemyFour.x,enemyFour.y}, {100,100}, {100,100},{100,100} } ; 
				// we assign the last three rows to be 100 as the function printBoard() will not consider them

            } else if ((*thisGame).difficulty = 2) {
				enemyOneEasy enemyOne, enemyTwo ;
				enemyTwoEasy enemyThree, enemyFour ; 
				enemyHard enemyFive, enemySix ;  

				// we can change the initialisations of the coordinates later if we need 
				enemyOne.x = 2 ; 
				enemyOne.y = 2 ; 

				enemyTwo.x = 4 ; 
				enemyTwo.y = 4 ; 

				enemyThree.x = 2 ; 
				enemyThree.y = 8 ; 

				enemyFour.x =  10 ; 
				enemyFour.y = 10 ; 

				enemyFive.x = 5 ; 
				enemyFive.y = 10 ; 

				enemySix.x = 6 ; 
				enemySix.y = 1 ; 
				
				int posArr[7][7] = {{enemyOne.x, enemyOne.y},{enemyTwo.x,enemyTwo.y},{enemyThree.x,enemyThree.y}, {enemyFour.x,enemyFour.y}, {enemyFive.x,enemyFive.y}, {enemySix.x,enemySix.y},{100,100} } ; 
            } else {
                std::cout << "What blight have you brough upon this cursed land";
            }

			user.isAlive = true ; 
			int *p ; 
			*p = 1 ;  // sets the users inital position

			user.x = p; 
			user.y = p;

			//-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-
			// this while loop plays the game 
			while(user.isAlive = true){
				
			} 
			
            //---/------/----/-----------/---/-----------/-----
            //ending screen
            bool condition2 = false;
            char newGame;

            while (condition2 == false) {
                std::cout << "Would you like to play again? y/n" << std::endl;
                std::cin >> newGame;

                if (newGame != 'y' || newGame != 'n') {
                    cout << "Please only enter y or n" << std::endl;
                } else if (newGame == 'n') {
                    condition2 = true;
                    (*thisGame).gameOver == true;
                    condition == true;
                } else {
                    condition2 == true;
                    delete thisGame;
                }
            }
            //---/------/----/-----------/---/-----------/-----
        }

        //-------------------------------------------
        return 0;
    }
}