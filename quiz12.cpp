//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E1.7

//To have a class Money with public members int dollars and cents. To also have
//non member function add money and to return total with cents less than 100

#include <iostream>
using namespace std;

class Money{
public:
  int dollars;
  int cents;
};

Money add_money(Money x, Money y){
  Money total;
  int centToDollars = 0;
  
  total.dollars = x.dollars + y.dollars;
  total.cents = x.cents + y.cents;
  
  while(total.cents >= 100){
    centToDollars++;
    total.cents -= 100;
  }

  total.dollars += centToDollars;

  return total;
}

int main(){
  Money first = {5, 10};
  Money second = {2, 0};

  Money total = add_money(first, second);

  cout << total.dollars << " and " << total.cents;

  return 0;
}
