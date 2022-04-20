#include <iostream>
using namespace std;

int main(){
  /*Idea:
   generate random floating point numbers x and y in [-1,1]
   Similar to dart being thrown at a swuare where x is [-1.1] and y is in [-1,1]

   To calculate the possibility that point (x,y) falls in the unit circle centered at (0,0)
  (aka square if x in [-1,1] and y in [-1,1], we calculate the number of times we
   hit the circle, that is x^2 + y^2 <= 1
  Meaning the dart falls into the circle

  DIvide that number by the total number of throws, that is the probability of the dart
   falling in that square

  That probability, when number of throws is big enough
  like 10,000, it is pi/4, the area of circle divided
  by the area of square whose sides are 2*/

  double x, y;
  int numHits = 0;
  x = 1.0 * rand() / RAND_MAX; //it is like
  //can also use x = (double)rand() / RAND_MAX;
  x *= 2; //x is a random floating number in [0,2]
  x -= 1; //x is a random floating number in [-1,1]

  y = 1.0 * rand() / RAND_MAX;
  Y *= 2;
  Y -= 2;

  if(x*x+y*y <= 1){
    numHits++;
  }

  //report numHits/NUM_THROWS(double division) * 4;
  //that is the estimate of pi 

  return 0;
}

/*

Generate a random floating point number in [start,end]

Use Monte Carlo simulation to estimate PI

 */
