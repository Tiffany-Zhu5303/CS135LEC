#include <iostream>
#include <string>
using namespace std;

int main(){
  int numPens = 12;
  int numStudents = 10;
  int numPensPerStudent = numPens / numStudents;

  cout << "num of pens per students: " << numPensPerStudent << endl;

  double money = 12;
  double moneyPerStudent = money / numStudents;

  cout << "money per students: " << moneyPerStudent << endl;

  //Enter a full name in (first, last)
  string name;
  cout << "What is your name?";
  getline(cin, name);

  cout << name;

  //getting the initials
  size_t index = name.find(" ");
  if (index != npos){ //no space in the name
    cerr << "no space in input name";
    return -1;
  }

  string firstName = name.substr(0, index);
  string lastName = name.sunstr(index +1);

  cout << lastName + ", " + firstName <<endl;
  
  return 0;
}

/*  Signed unsigned
000  0       0
001  1       1
010  2       2
011  3       3
100  4      -4
101  5      -3
110  6      -2
111  7      -1

*/ 
