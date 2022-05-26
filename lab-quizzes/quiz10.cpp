//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: quiz 10

//To have a function that returns the difference between open curly brackets and closed curly brackets

#include <iostream>
using namespace std;

int unbalanced_brackets(string input){
  int open = 0;
  int closed = 0;
  
   for(int i = 0; i < input.length(); i++){
     if(input[i] == '{'){
       open ++;
     }else if(input[i] == '}'){
       closed ++;
     }
  
  }

  return open - closed;
}

int main(){
  string whatever = "{{{{{}}}";

  cout << unbalanced_brackets(whatever) << endl;

  return 0;
}
