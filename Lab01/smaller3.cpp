#include <iostream>

int main(){
  //ask user to input three different numbers
  int a, b, c;

  std::cout << "Enter the first number:\n";
  std::cin >> a;

  std::cout << "Enter the second number:\n";
  std::cin >> b;

  std::cout << "Enter the third number:\n";
  std::cin >> c;

  //return the smallest of the three
  if(a<b && a<c) {
    std::cout << "\nThe smaller of the three is " << a;
  } else if(b<c && b<a){
    std::cout << "\nThe smaller of the three is " << b;
  } else{
    std::cout << "\nThe smaller of the three is " << c;
  }
  
  return 0;
}