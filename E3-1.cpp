//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E3.1

//Determines whether an integer is positive, zero, or negative


#include <iostream>
using namespace std;

int main(){
  int a;

  cout << "Enter a number: " << endl;
  cin >> a;

  if(a == 0){
    cout << "zero" << endl;
  }else if (a < 0){
    cout << "negative" << endl;
  }else {
    cout << "positive" << endl;
  }

  return 0;
}
