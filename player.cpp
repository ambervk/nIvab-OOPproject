#include <iostream>

#include "player.h"

//checks to see if the player overlaps with another object
bool player::checkOverlap(int* x_outside, int* y_outside) {
    if (*x == *x_outside && *y == *y_outside) {
        return true;
    } else {
        return false;
    }
};

//Player intputs command to move
int player::movement(char input) {

    switch (input) {
    case ('w'):
        //move up one space
        if ((*y + 1) < 12) {
            *y = *y + 1;
        } else {
            *y = *y;
        }
        break;

    case ('s'):
        //move down one space
        if ((*y - 1) > 0) {
            *y = *y - 1;
        } else {
            *y = *y;
        }
        break;

    case ('a'):
        //move one space left
        if ((*x - 1) > 0) {
            *x = *x - 1;
        } else {
            *x = *x;
        }
        break;

    case ('d'):
        //move one space right
        if ((*x + 1) < 12) {
            *x = *x + 1;
        } else {
            *x = *x;
        }
        break;
    case ('\0'):				
		x = x ; 
        }
    
    return *x, *y ; 
} ; 
