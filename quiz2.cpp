//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab quiz Substring pyramid

//To print out a string adding on one letter at a time on a separate line.
//When it is all printed, take away a letter and print out on a separate line again.

#include <iostream>
using namespace std;

void pyramid(string line){
  string newline;
  string arr[line.length()];

  for (int i = 0; i < line.length(); i++){
    newline += line.substr(i, 1);
    arr[i] = line.substr(i, line.length() - i);
    
    cout << newline << endl;
  }

  for (int i = 1; i < newline.length(); i++){
    cout << arr[i] << endl;
  }
}

int main(){
  string line;

  cout << "Please enter some text" << endl;
  getline(cin, line);

  pyramid(line);

  return 0;
}
