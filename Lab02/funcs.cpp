#include "funcs.h"
#include <iostream>

void print_interval(int L, int U){
  for(int i = L; i < U; i++){
    //the body of the loop will get executed for all values of i
    //starting at L and ending at the largest integer less than U
    std::cout << i << " ";
  }
}
