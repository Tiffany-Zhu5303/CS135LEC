//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab quiz 4

//initialize array of numbers 1-10 and use cout to print each number on a certain line

#include <iostream>
using namespace std;

int main(){
  int arr[10];

  for(int i = 0; i < 10; i++){
    arr[i] = i + 1;
  }

  for(int i = 0; i < 10 ; i++){
    cout << arr[i] << endl;
  }

  return 0;
}
