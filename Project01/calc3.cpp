//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Project 1

//To have an input of three different names and to print //each name on a separate line.

#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num;
  int squared = 0;
  int remnum = 0;
  char operation;
  char remsign = ' ';

  cin >> num;
  
 while (cin >> operation){

     //cout << operation;
    
    if (operation == '+' && squared > 0 && remsign == '+'){
      sum = sum + squared + remnum;
      remnum = 0;
      squared = 0;
      remsign = '+';
      cin >> num;
    }else if (operation == '+' && squared > 0 && remsign == '-'){
      sum = sum - squared + remnum;
      //cout << sum << "For the second equation, this should be 1011\n";
      remnum = 0;
      squared = 0;
      remsign = '+';
      cin >> num;
    }else if(operation == '+'){
      cin >> num; // next num w/ remnum
      //cout << num << "this should be 6\n";
      remsign = '+';
    }else if (operation == '-' && squared > 0 && remsign == '+'){
      sum = sum + squared + remnum; //second equation
      // cout << sum << "this should be 1000 + 36\n";
      remnum = 0;
      squared = 0;
      remsign = '-';
      cin >> num;
    }else if (operation == '-' && squared > 0 && remsign == '-'){
      sum = sum - squared + remnum;
      remnum = 0;
      squared = 0;
      remsign = '-';
      cin >> num;
    }else if(operation == '-'){
      cin >> num;
      remsign = '-';
    }else if (operation == '^'){
      squared = num * num; //second equation
      // cout << squared << "the first one should be 36 and the second should be 25\n";
    }else if (operation == ';' && squared > 0){
      sum = sum + squared;
      cout << sum << "\n";
      squared = 0;
      cin >> num;
      sum = 0;
      remnum = num;
    }else if (operation == ';'){ //after 5^ -> 1000
      sum = sum + num;
      cout << sum << "\n";
      cin >> num;
      sum = 0;
      remnum = num;
    }
  }
  
  return 0;
}
