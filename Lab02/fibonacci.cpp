#include <iostream>

int main(){
  
  //array created
  unsigned long int fib[60];

  //given values of array
  fib[0] = 0;
  fib[1] = 1;
  std::cout << fib[0] << "\n" << fib[1] << "\n";

  //filling rest of array
  for (unsigned long int index = 2; index < 60; index++){
    fib[index] = fib[index-1] + fib[index-2];
    std::cout << fib[index] << "\n";
  }
  
  return 0;
}
