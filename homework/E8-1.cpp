//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E8.1

//program -> open file "hello.txt" -> store "Hello, World!" in file ->
//close file -> open same file again -> read the message into a string variable
//and then prints it
#include <iostream>
#include <fstream>
using namespace std;

int main(){
  //opening file "hello.txt"
  ofstream file;
  file.open("hello.txt");

  //store "Hello, World!"
  file << "Hello, World!";

  //close file
  file.close();

  //open same file
  string line;
  string print;
  
  ifstream sameFile;
  sameFile.open("hello.txt");

  //read message into string variable
  while(sameFile >> line){

    print = print + " " + line;

  }

  cout << print;
  
  return 0;
}
