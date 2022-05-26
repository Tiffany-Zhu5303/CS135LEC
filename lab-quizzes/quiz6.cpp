//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab quiz 6

//print 6 rows and 5 columns of *. Each line has a space between the *
//Except the last line.

#include <iostream>
using namespace std;

int main(){
  char star = '*';
  string row = "";

  //first four column
  for(int i = 0; i < 4; i++){
    row = row + star + " ";
  }

  //last column ending with the star
  row += star;

  //first 5 rows
  for(int i = 0; i < 6; i++){
    cout << row << endl;
  }

  return 0;
}
