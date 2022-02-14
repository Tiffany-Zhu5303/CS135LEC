//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Project 1 - Task B

//To have a calculator program that can add and subtract an equation

#include <iostream>
#include <string>
using namespace std;

int main(){
  int num;
  int sum = 0;
  char operation;

  //reads the first number and then adds to the sum
  //like readline() in python
  cin >> num;
  sum = sum + num;

  while (cin >> operation){
    cin >> num;

    //checking for operation
    if (operation == '+'){
      sum = sum + num;
    }else if (operation == '-'){
      sum = sum -  num;
    }
  }

  cout << sum << endl;
  return 0;
}
