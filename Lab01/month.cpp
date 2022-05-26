#include <iostream>

int main(){
  //ask user to input year
  int year, month;

  std::cout << "Enter year:";
  std::cin >> year;

  std::cout << "Enter month: ";
  std::cin >> month;

  //return common or leap year for inputted year
  int leap = 0, common = 0;

  if (year % 4 != 0){
    common = 1;
  }else if (year % 100 != 0){
    leap = 1;
  }else if (year % 400 != 0){
    common = 1;
  }else {
    leap = 1;
  }

  //odd months up to July
  if (month < 8 && month % 2 != 0){
    std::cout << "31 days";
  //February
  } else if (month == 2 && common == 1){
    std::cout << "28 days";
  } else if (month ==2 && leap == 1){
    std::cout << "29 days";
  //even months up to July
  } else if (month < 8 && month % 2 == 0){
    std::cout << "30 days";
  //even months after July
  } else if (month > 7 && month % 2 == 0){
    std::cout << "31 days";
  //odd months after July
  } else{
    std::cout << "30 days";
  }

  return 0;
} 