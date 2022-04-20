//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E5.14

//To have two ints. If the first int is greater than the second int then we swap the two values. If it is less than the second int then we keep the values as is.
#include <iostream>
using namespace std;

void sort2(int&a, int&b){
  int saveA = a;
  int saveB = b;

  if(a > b){
    a = saveB;
    b = saveA;
  }

}

int main(){
  int a = 20;
  int b = 21;
  int c = 4;
  int d = 18;
  cout << "This is a: " << a << "\nThis is b: " << b << "\nThis is c: " << c << "\nThis is d: " << d << endl;

  sort2(a, b);
  cout << "\nSORTED\nThis is a: " << a << "\nThis is b: " << b << endl;
  sort2(c, d);
  cout << "\nSORTED\nThis is c: " << c << "\nThis is d: " << d << endl;
  sort2(b, a);
  cout << "\nSORTED\nThis is a: " << a << "\nThis is b: " << b << endl;
  sort2(d, c);
  cout << "\nSORTED\nThis is c: " << c << "\nThis is d: " << d << endl;

  return 0;
}

  
