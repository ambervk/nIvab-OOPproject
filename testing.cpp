#include <iostream>
using namespace std;

int main(){

//testing 2x2 enemy object

  char enemyHard1[2][2] = {{'*','*'}, {'*','*'}};

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      std::cout << enemyHard1[i][j] << ' ';
    }
    std::cout << std::endl;
  }
  return 0;
}