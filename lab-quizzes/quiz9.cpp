//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Quiz 9

//To have a class that prints out the date

#include <iostream>
#include <string>
using namespace std;

class Date{
public:
  int year;
  int month;
  int day;
  string day_of_week;

  void printDate(Date *input);
};

void  printDate(Date *input){
  string date = input->day_of_week + ", " + to_string(input->month) + "/" + to_string(input->day) + "/" + to_string(input->year);

  cout << date << endl;;
  
}

int main(){
  Date first = {2022, 4, 20, "Wednesdays"};
  Date *ptr = &first;
  /*cout << "enter a month (1-12)" << endl;
  cin >> first.month;

  cout << "enter a date (1-31)" << endl;
  cin >> first.day;

  cout << "enter a year (full)" << endl;
  cin >> first.year;

  cout << "enter a day of the week (full)" << endl;
  cin >> first.day_of_week;

  Date date = {first.year, first.month, first.day, first.day_of_week};*/

  printDate(ptr);

  return 0;
}
