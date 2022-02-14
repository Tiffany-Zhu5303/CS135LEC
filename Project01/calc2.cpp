//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Project 1 - Task C

//To have a calculator program that can add and subtract multiple equations.

#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num;
  char operation; // storing single character

  cin >> num; //first number read
  sum = sum + num; 
  
  while (cin >> operation){//while taking in the operators
    if (operation == '+'){
      cin >> num;
      sum = sum + num;
    }else if (operation == '-'){
      cin >> num;
      sum = sum - num;
    }else if (operation == ';'){
      cout << sum << "\n";
      sum = 0;
      cin >> num;
      sum = sum + num;
    }
  }
  
  return 0;
}
