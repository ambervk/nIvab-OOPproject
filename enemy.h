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

//use a 2d array to create the 2x2 enemy object
char enemyHard1[2][2] = {{'*','*'}, {'*','*'}};

for(int i = 0; i < 2; i++){
  for(int j = 0; j < 2; j++){
    std::cout << enemyHard1[i][j] << ' ';
  }
  std::cout << std::endl;
}

int movement(int *x, *y){
//have to move each element of the 2d array
for(int i = 0; i < 2; i++){
  for(int i = 0; i < 2; i++){
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
}


//------------------------------------------------

class enemyTwoHard : public enemy{
//moves all directions
//moves 2 spaces
public:
  int movement(int *x, *y){
	  ran = (rand() % 8)
		  switch(ran){
  	  case(0):
  	  //move up 2 spaces
    	  *y = *y + 2;
    	  break;

  	  case(1):
  	  //move down 2 spaces
    	  *y = *y - 2;
    	  break;

 	    case(2):
  		  //move 2 spaces left 
    	  *x = *x - 2;
    	  break;

  	  case(3):
  		//move 2 spaces right
    	  *x = *x + 2;
   	  break;
       
      case(4):
  	  //move 2 spaces NE
    	  *y = y + 2;
    	  *x = x + 2;
    	  break;

  	  case(5):
  		//move 2 spaces SE
    	  *y = y - 2;
    	  *x = x + 2;
    	  break;

  	  case(6):
  	  //move 2 spaces SW
		    *y = y - 2;
  	    *x = x - 2;
  	    break;

  	  case(7):
 			//move 2 spaces NW
   		  *y = y - 2;
    	  *x = x + 2;
    	  break;
	  } 
  }

}

#endif //ENEMY_H