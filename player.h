#ifndef PLAYER_H
#def PLAYER_H
#include <iostream>
using namespace std ; 


class player{

  public:
  int *x,*y ; 
	 bool checkOverlap(int *x, int *y, int *x_two, int *y_two) ; // checks to see if the player is overlapping with any other object 
  bool isAlive ; 

//use w-a-s-d keys to move player
// also check if position player moves to is taken by enemy

  int movement(char input) ; 

} ; 



#endif //PLAYER_H