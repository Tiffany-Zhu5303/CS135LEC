#include <iostream>

int main(){
  
  //ask user to input two numbers 
  int a, b;

  std::cout << "Enter the first number: ";
  std::cin >> a;

  std::cout << "Enter the second number: ";
  std::cin >> b;

  //return the smallest of the two
  if(a<b) {
    std::cout << "\nThe smaller of the two is " << a;
  } else {
    std::cout << "\nThe smaller of the two is " << b;
  }
  
  return 0;
}