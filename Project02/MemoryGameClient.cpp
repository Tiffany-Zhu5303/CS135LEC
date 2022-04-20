//File name: /Users/laptopuser/Documents/courses/cs135/projects/memoryGame/MemoryGameClient.cpp
#include "MemoryGame.hpp"

int main()
{
  bool bShown[8];
  
  for(int i = 0; i < 8; i++){
    bShown[i] = true;
  }

  MemoryGame game;
  game.display(bShown);
  
  game.play();
  return 0;
}
