#include <iostream>
#include "adders.h"
#include "utils.h"

int main(){
  std::cout << "Hello World!\n";

  int b = add3(1, 2, 3);
  std::cout << b << "\n";

  int a = multadd2(2, 3, 4);
  std::cout << a << "\n";

  int c = 5;
  return 0;
}

/*Main is dependent on adder and util. Utils is also dependent on adders.*/
