#include "enemy.h"
#include "game.cpp"
#include "player.cpp"
#include <iostream>
#include <vector>

int main() {
    game *thisGame; //create the game

    //Title screen to choose difficulty
    // -----------------------------------------
    bool condition = false;
    char *playcheck;

    while (condition == false) {
        std::cout << "Press y to play" << std::endl;
        std::cin >> *playcheck;

        if (*playcheck != 'y') {
            cout << "Please press y to play " << endl;
        } else {
            condition == true;
        }
    }
    //-------------------------------------------------------------
    //MAIN DRIVER OF THE GAME
    //------------------------------------------------------------

    (*thisGame).gameOver = false;

    player user;
    while ((*thisGame).gameOver == false) {

        enemyOneEasy enemyOne, enemyTwo;
        enemyTwoEasy enemyThree, enemyFour;
        enemyHard enemyFive, enemySix;

        // we can change the initialisations of the coordinates later if we need
        enemyOne.x = 2;
        enemyOne.y = 2;

        enemyTwo.x = 4;
        enemyTwo.y = 4;

        enemyThree.x = 2;
        enemyThree.y = 8;

        enemyFour.x = 10;
        enemyFour.y = 10;

        enemyFive.x = 5;
        enemyFive.y = 10;

        enemySix.x = 6;
        enemySix.y = 1;

        int posArr[7][2] = {{100, 100}, {enemyOne.x, enemyOne.y}, {enemyTwo.x, enemyTwo.y}, {enemyThree.x, enemyThree.y}, {enemyFour.x, enemyFour.y}, {enemyFive.x, enemyFive.y}, {enemySix.x, enemySix.y}};

        user.isAlive = true;
        int *p;
        *p = 1; // sets the users inital position

        user.x = p;
        user.y = p;

        (*thisGame).posArr[0][0] = *user.x;

        (*thisGame).posArr[0][1] = *user.y;

        //-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-
        // this while loop plays the game
        char inpt;
        while (user.isAlive = true) {
            (*thisGame).printBoard(posArr);

            enemyOne.movement();
            enemyTwo.movement();
            enemyThree.movement();
            enemyFour.movement();
            enemyFive.movement();
            enemySix.movement();

            std::cin >> inpt;

            user.movement(inpt);

            for (int k = 1; k < 7; k++) {
                int *p_x = &posArr[k][0];
                int *p_y = &posArr[k][1];

                if (user.checkOverlap(p_x, p_y) == true) {
                    user.isAlive == false;
                };
            }
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
}  ;