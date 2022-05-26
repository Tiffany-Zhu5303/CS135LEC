//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E5.6

//To return the middle of a given string by the user


#include <iostream>
using namespace std;

string middle(string str){
  //measures length of string
  int length = str.length();

  //creates a placeholder for the middle characters
  string middleChar;

  if(length % 2 == 0){

    //takes characters from the middle and -1 because index starts at 0 so we need to offset by 1
    middleChar = str.substr(length / 2 - 1, 2);

    return middleChar;
  }else {
    int modLength = length + 1;

    middleChar = str.substr(modLength / 2 - 1, 1);

    return middleChar;
  }

}

int main(){
  string str;
  cout << "Input a string: " << endl;
  cin >> str;

  string middleStr = middle(str);
  cout << middleStr << endl;
}
