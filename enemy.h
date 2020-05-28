#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
using namespace std;

class enemy {
    //int virtual spawning() ; // defines when the enemy spawns into the grid
  public:
    //virtual function
    enemy();
    virtual int movement();
    int x, y; // xx
};

//------------------------------------------------

class enemyOneEasy : public enemy {
    //move up, down, left, right
    //move one space

  public:
    enemyOneEasy();
    int movement(); //dc
};

//------------------------------------------------

class enemyTwoEasy : public enemy {
    //move diagonally only
    //move one space

  public:
    enemyTwoEasy();
    int movement(); //dc
};

//------------------------------------------------

class enemyHard : public enemy {
    //moves all directions
    //moves 2 spaces
  public:
    enemyHard();
    int movement();
};

#endif //ENEMY_H