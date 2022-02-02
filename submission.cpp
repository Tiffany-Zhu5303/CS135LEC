//Author: Tiffany Zhu 
/*Course: CSCI-135
Instructor: Tong Yi 
Assignment: HW E1.7

To have an input of three different names and to print each name on a separate line.

*/
#include <iostream>
using namespace std;

int main(){
  string name1, name2, name3;

  cout << "Enter the first name ";
  cin >> name1;

  cout << "Enter the second name ";
  cin >> name2;

  cout << "Enter the third name ";
  cin >> name3;

  cout << name1 << "\n" << name2 << "\n" << name3;

  return 0;
}