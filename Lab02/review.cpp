#include <cstdio>
#include <iostream>

int main(){

  std::string s;
  double d;
  int i;
  std:: cin >> s;

  try {//try to do something
    //if this works then continue
    
  d = std::stold(s); //stold = String To Long Double
  std :: cout << d << "\n";

  }catch(std::exception e) { //if an exception (something happens)
    //loops until you enter a valid value
    
    std::cout << "Error\n";
    std::cout << e.what() << "\n"; //e.what() specifies error
    
  }
  
  return 0;
}
