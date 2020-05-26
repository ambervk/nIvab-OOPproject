#ifndef PLAYER_H
#def PLAYER_H
#include <iostream>
using namespace std ; 


class Player(){

  public:
  int position() ; 
  bool isAlive() ; 

//used wasd keys to move player
  int movement(int *x, *y){
		  switch(move){
  	  case(w):
  	  //move up one space
    	  *y = *y + 1;
    	  break;

  	  case(s):
  	  //move down one space
    	  *y = *y - 1;
    	  break;

 	    case(a):
  		  //move one space left 
    	  *x = *x - 1;
    	  break;

  	  case(d):
  		//move one space right
    	  *x = *x + 1;
   	  break;
	  } 
  }

}

}



#endif //PLAYER_H