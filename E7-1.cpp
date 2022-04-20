//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E7.1

//To have a void function with two pointers and sorts the values
//to which they point. Given x and y, it should return x <= y

#include <iostream>
using namespace std;

void sort2(double* p, double* q){
  //pointer locations
  double saveP = *p;
  double* saveQ = q;

  if (*p > *q){

   *p = *saveQ;
   *q = saveP;
  }

}

int main(){
  double x, y;
  cout << "enter a value for x" << endl;
  cin >> x;
  cout << "enter a value for y" << endl;
  cin >> y;

  double* pointerx = &x;
  double* pointery = &y;

  //pointer locations
  sort2(pointerx, pointery);

  //pointer value
  cout << *pointerx << " and " << *pointery << endl;
  
  return 0;
}
