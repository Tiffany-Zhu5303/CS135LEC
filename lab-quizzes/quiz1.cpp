//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab Quiz 01

//To enter an int and print out "I love C++" that many times.

#include <iostream>
using namespace std;

int main(){

  int input;
  cout << "Enter an integer: " << endl;
  cin >> input;

  for(int n = 0; n <= input - 1; n++){
    
    cout << "I love C++" << endl;
    
  }
  return 0;
}
