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
        // -----------------------------------------

        //-------------------------------------------------------------
        //MAIN DRIVER OF THE GAME
        //------------------------------------------------------------

        thisGame = new game(*diff);

        (*thisGame).gameOver = false;

        while ((*thisGame).gameOver == false) {
            if ((*thisGame).difficulty = 1) {
                enemyOneEasy hello;

            } else if ((*thisGame).difficulty = 2) {

            } else {
                std::cout << "What blight have you brough upon this cursed land";
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