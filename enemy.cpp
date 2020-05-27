include <iostream>

#include "enemy.h"
//all enemies movements are random

// -------------------------------------------------------------------

int enemyOneEasy::movement(int *x, int *y, int altX, int altY){
	  int ran = (rand() % 4) ; 
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
  } ; 
//--------------------------------------------------------------------
int enemyTwoEasy::movement(int *x, int *y){
	int ran = (rand() % 4) ; 
	    switch(ran){
  	  case(0):
  	  //move one space NE
    	  *y = *y + 1;
    	  *x = *x + 1;
    	  break;

  	  case(1):
  		//move one space SE
    	  *y = *y - 1;
    	  *x = *x + 1;
    	  break;

  	  case(2):
  	  //move one space SW
		    *y = *y - 1;
  	    *x = *x - 1;
  	    break;

  	  case(3):
 			//move one space NW
   		  *y = *y - 1;
    	  *x = *x + 1;
    	  break;
      }

} ; 

	//-------------------------------------------------------------


int enemyHard::movement(int *x, int *y){
	  int ran = (rand() % 8) ; 
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
    	  *y = *y + 2;
    	  *x = *x + 2;
    	  break;

  	  case(5):
  		//move 2 spaces SE
    	  *y = *y - 2;
    	  *x = *x + 2;
    	  break;

  	  case(6):
  	  //move 2 spaces SW
		    *y = *y - 2;
  	    *x = *x - 2;
  	    break;

  	  case(7):
 			//move 2 spaces NW
   		  *y = *y - 2;
    	  *x = *x + 2;
    	  break;
	  } 
  }