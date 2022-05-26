//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E3.5

//There are three different numbers inputted by user. If strictly increasing. then print "increasing". If strictly decreasing, then print "decreasing". Otherwise, print neither.


#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  
  cout << "Enter a number: " << endl;
  cin >> a;

  cout << "Enter another number: " << endl;
  cin >> b;

  cout << "Enter another number: " << endl;
  cin >> c;

  if(a < b && b < c){
    cout << "increasing" << endl;
  }else if(a > b && b > c){
    cout << "decreasing" << endl;
  }else{
    cout << "neither" << endl;
  }
  
  return 0;
}
