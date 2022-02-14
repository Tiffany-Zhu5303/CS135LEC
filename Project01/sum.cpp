//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Project 1 - Task A

//To have a calculator program that can add and subtract multiple equations.

#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  int number = 0;
  while(cin >> s){ //while taking an input
    int converted_s = stoi(s); // converting from string to number
    number = number + converted_s;
 }
  cout << number << endl;
  return 0;
}
