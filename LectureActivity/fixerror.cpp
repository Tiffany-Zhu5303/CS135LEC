#include <iostream>
using namespace std;

//Enter a full name in format of first, last
//Separate first and last name
//get the initials

int main(){
  cout << "Enter a name in the format of first, last: ";
  string name;
  getline(cin, name);

  size_t index = name.find(" ");
  //index is the location of the first occurence of " " in name
  if (index == string::npos)//no space in name
    {
      cerr << "no space in input name, cannot proceed" << endl;
      return -1;
    }

  string firstName = name.substr(0, index);
  string lastName = name.substr(index + 1);

  //Last, First
  cout << lastName + ", " + firstName << endl;
  
  return 0;
}
