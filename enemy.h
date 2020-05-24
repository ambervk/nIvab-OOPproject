#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
using namespace std ; 


class enemy{
	int virtual spawning() ; // defines how the enemy spawns into the grid 
  public: 

    //virtual function
		virtual int movement() ; 
		int* x, y; 
}
//------------------------------------------------
class enemyOneEasy: public enemy{
//move up, down, left, right
//move one space 

public:
  int movement(int *x, *y){
	  ran = (rand() % 4)
		  switch(ran){
  	  case(0):
  	  //move up one space
    	  *y = *y + 1;
    	  break;

  	  case(1):
  	  //move down one space
    	  *y = *y - 1;
    	  break;

 	    case(2):
  		  //move one space left 
    	  *x = *x - 1;
    	  break;

  	  case(3):
  		//move one space right
    	  *x = *x + 1;
   	  break;
	  } 
  }

}

//------------------------------------------------
class enemyTwoEasy : public enemy{
//move diagonally only
//move one space

public:
  int movement(int *x, *y){
    ran = (rand() % 4)
	    switch(ran){
  	  case(0):
  	  //move one space NE
    	  *y = y + 1;
    	  *x = x + 1;
    	  break;

  	  case(1):
  		//move one space SE
    	  *y = y - 1;
    	  *x = x + 1;
    	  break;

  	  case(2):
  	  //move one space SW
		    *y = y - 1;
  	    *x = x - 1;
  	    break;

  	  case(3):
 			//move one space NW
   		  *y = y - 1;
    	  *x = x + 1;
    	  break;
      }
   }

} 


//------------------------------------------------

class enemyOneHard : public enemy{
//moves all directions
//2x2 object 
//moves one space
int movement(){
for(int i = 0; i > 4; i++ ){

**
**

}

}
}
//------------------------------------------------

class enemyTwoHard : public enemy{
//moves all directions
//moves 2 spaces

}


#endif //ENEMY_H