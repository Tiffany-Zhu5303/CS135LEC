#include <iostream>

int main(){
  int n;
  std::cout << "Please enter an integer from 0 - 100: ";
  std::cin >> n;

  while (n <= 0 || n >= 100){
    std::cout << "Please re-enter: ";
    std::cin >> n;
  }

  std::cout << "Number squared is " << n * n;
  return 0;
}
