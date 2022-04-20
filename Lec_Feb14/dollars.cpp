#include <iostream>
using namespace std;

/*Task: given enough $2 and $5 to find out all possible ways to get $15
1. list all possible combos of integers x and y such that
   x in [0, 15/2] and y in [0, 15/5]
2. filter from those x and y combos*/
int main(){
  int x;

  x = 1;
  for(int y = 0; y <= 15/3; y++){
    cout << "{" << x << ", " << y << ")\t";
    //prints out (0,0), (0,1), (0,2), etc
  }

  x++;
  //do the same for loop

  //look for a pattern
  return 0;
}
