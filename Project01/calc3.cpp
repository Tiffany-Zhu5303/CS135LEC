//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Project 1 - Task D

//To have a calculator program that can add, subtract, and square multiple equations.

#include <iostream>
#include <string>
using namespace std;

int main(){
  int sum = 0;
  int num, remNum;
  char operation = '+';
  char get;

  while(cin >> num){

           //check to see if it is + or -
        if (operation == '+'){
            remNum = num; //store the number
	    //gets the next char
            get = cin.get();
            if (get == '^'){
	      //square the number 
                remNum = remNum * remNum;
            }
            else {
	      //return the next term
                cin.putback(get);
            }

            sum += remNum;
        }
        else if (operation == '-'){
            remNum = num;
            get = cin.get();
            if (get == '^'){
                remNum = remNum * remNum;
            }
            else {
                cin.putback(get);
            }
            sum -= remNum;
        }

        cin >> operation;

        if (operation == ';'){
            cout << sum << endl;
            operation = '+';
            sum = 0; //reset the sum back to 0 so the current sum isn't added onto for the next line
        }
        
    }

}
