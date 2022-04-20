//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Project 1 - Task D

//To have a calculator program that can add, subtract, and square multiple equations.

#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num;
  int squared = 0;
  int remnum;
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
      remnum = 0;
      squared = 0;
      remsign = '+';
      cin >> num;
    }else if (operation == '-' || operation == '+' && squared > 0){
      sum = sum + squared + remnum;
      remnum = 0;
      remsign = operation;
      squared = 0;
      cin >> num;
    }else if(operation == '+' && remsign == '+'){
      sum = sum + num;
      cin >> num;
      remsign = '+';
    }else if(operation == '+' && remsign == '-'){
      sum = sum - num;
      cin >> num; 
      remsign = '+';
    }else if(operation == '+'){
      sum = sum + num;
      cout << "This should be 5 " << sum;
      cin >> num;
      remsign = '+';
    }else if (operation == '-' && squared > 0 && remsign == '+'){
      cout << "my god this?";
      sum = sum + squared + remnum;
      remnum = 0;
      squared = 0;
      remsign = '-';
      cin >> num;
    }else if (operation == '-' && squared > 0 && remsign == '-'){
      cout << "no way";
      sum = sum - squared + remnum;
      remnum = 0;
      squared = 0;
      remsign = '-';
      cin >> num;
    }else if(operation == '-' && remsign == '+'){
      sum = sum + num;
      cout << "\nThis should be 11" << sum << "Helloooooo where is this?";
      cin >> num;
      remsign = '-';
    }else if(operation == '-' && remsign == '-'){
      sum = sum - num;
      cout << "\n this should be 4" << sum;
      cin >> num;
      remsign = '-';
    }else if(operation == '-'){
      cout << "seriously";
      sum = sum + num;
      cin >> num;
      remsign = '-';
    }else if (operation == '^'){
      squared = num * num;
    }else if (operation == ';' && squared > 0 && remsign == '-'){
      sum = sum - squared;
      cout << sum << "\n";
      squared = 0;
      cin >> num;
      sum = 0;
      remnum = num;
      remsign = ' ';
    }else if (operation == ';' && squared > 0){
      sum = sum + squared;
      cout << sum << "\n";
      squared = 0;
      cin >> num;
      sum = 0;
      remnum = num;
      remsign = ' ';
    }else if (operation == ';' && remsign != ' '){ 
      cout << sum << "\n";
      cin >> num;
      sum = 0;
      remnum = num;
      remsign = ' ';
    }else if (operation == ';'){
      sum = sum + num;
      cout << sum << "\n";
      cin >> num;
      sum = 0;
      remnum = num;
      remsign = ' ';
    }
  }
  
  return 0;
}
