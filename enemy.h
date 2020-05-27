#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
using namespace std ; 


class enemy{
	int virtual spawning() ; // defines how the enemy spawns into the grid 
  public: 
    //virtual function
		virtual int movement(int *x, int *y) ; 
		int* x, y; 
}


//------------------------------------------------

class enemyOneEasy: public enemy{
//move up, down, left, right
//move one space 

public:
  int movement(int *x, *y) ; 
	int *altX = *x+1 ; 
	int *altY = *y-1 ; 

}

//------------------------------------------------

class enemyTwoEasy : public enemy{
//move diagonally only
//move one space

public:
  int movement(int *x, *y);
	int altX = *x + 1; 
	int altY = *y - 1; 

} 


//------------------------------------------------




class enemyOneHard : public enemy{
//moves all directions
//2x2 object 
//moves one space

//use a 2d array to create the 2x2 enemy object

public: 

char enemyHard1[2][2] = {{'#','#'}, {'#','#'}};

void printEnemy() ; 
int movement(int *x, *y) ; 

}


//------------------------------------------------

class enemyTwoHard : public enemy{
//moves all directions
//moves 2 spaces
public:
  int movement(int *x, int *y)
}

#endif //ENEMY_H