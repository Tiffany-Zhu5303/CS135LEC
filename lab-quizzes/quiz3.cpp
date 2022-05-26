//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab Quiz 03 

//Enter two integer x and y and return the value of the bigger number

#include <iostream>
using namespace std;

int main(){

  int x, y;

  cout << "Enter an integer for x" << endl;
  cin >> x;
  cout << "Enter an integer for y" << endl;
  cin >> y;

  if(x > y){

    cout << "The bigger number is " << x << endl;

  }else{

    cout << "The bigger number is " << y << endl;
  }

  return 0;
}
