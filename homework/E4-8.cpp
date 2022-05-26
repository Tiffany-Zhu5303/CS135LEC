//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E4.8

//To have an input of a word and to print out each letter of the word on a separate line.

#include <iostream>
#include <string>
using namespace std;

int main(){
  string word, shortened;

  cout << "Please enter a word." << endl;
  cin >> word;

  shortened = word;

  for(int i = 1; i <= word.length(); i++){
    cout << shortened.substr (0, 1) << endl;
    shortened = shortened.erase (0, 1);
  }

  return 0;
}
