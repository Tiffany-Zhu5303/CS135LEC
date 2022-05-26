#include <iostream>
#include "funcs.h"

int main(){
  int L = -2;
  int U = 5;

  std::cout << "integers from " << L << " to " << U;
  std::cout << ": \n";
  print_interval(L, U);

  L = -5;
  U = 10;
  std::cout << "\nintegers from " << L << " to " << U;
  std::cout << ": \n";
  print_interval(L, U);

  L = 3;
  U = 18;
  std::cout << "\nintegers from " << L << " to " << U;
  std::cout << ": \n";
  print_interval(L, U);
  return 0;

}
