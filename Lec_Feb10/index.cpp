#include <iostream>
using namespace std;

int main(){
  cout::"Enter name in the format of first, last";
  string name;
  getline(cin, name);

  //process name to extract last and first
  size_t index = name.find(" ");

  //if (index == string::npos) //no space in line
  if (index < 0) //no space
    {
      cerr << "no space in input name, cannot proceed" << endl;
      return -1;
    }

  string firstName = name.substr(0, index);
  string lastName = name.substr(index + 1);
  cout << lastName + ", " + firstName << endl;

  //find out the initials
  
  return 0;
}
