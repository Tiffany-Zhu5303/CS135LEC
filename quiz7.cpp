//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab quiz 7

//To have a function int max3 which returns the maximum of 3 given numbers.

#include <iostream>
using namespace std;

int max3(int a, int b, int c);

int main(){
  int a = 5;
  int b = 6;
  int c = 7;

  cout << max3(a, b, c) << endl;

  return 0;
}

int max3(int a, int b, int c){
  if(a > b && a > c){
    return a;
  }else if(b > a && b > c){
    return b;
  }else{
    return c;
  }
}
