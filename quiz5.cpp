//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: lab quiz 5

//To open and read "data.txt" which contains lines of text with names of colors
//and their RGB value. Read and print each line. Close the file after
#include <iostream>
using namespace std;
#include <fstream>

int main(){
  ifstream file;
  file.open("data.txt");
  string line;
  
  while(getline(file, line)){
    cout << line << endl;
  }

  file.close();
  
  return 0;
}
