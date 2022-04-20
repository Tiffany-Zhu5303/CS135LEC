//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab quiz 8

//To have a void function that removes all the e characters from a string.

#include <iostream>
#include <string>
using namespace std;

void remove_e(string& sentence);

int main(){
  string song;
  cout << "Please enter some text" << endl;
  cin >> song;

  remove_e(song);

  cout << song << endl;

  return 0;
}

void remove_e(string& sentence){
  for(int i = 0; i < sentence.length(); i++){
    if(sentence[i] == 'e'){
      sentence.erase(i, 1);
    }
  }
}
