//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E7.16

//To have a structure Point with coordinate x and y. There is a double function
//which calculates the distance between two different points
#include <iostream>
#include <math.h>
using namespace std;

class Point {
public:
  double x, y;
  
};

double distance(Point a, Point b);

int main(){
  /* int x, y;

  cout << "Enter a value for x" << endl;
  cin >> x;
  cout << "Enter a value for y" << endl;
  cin >> y;*/
  
  Point coord1 = {0,1};

  /*cout << "Enter a value for x" << endl;
  cin >> x;
  cout << "Enter a value for y" << endl;
  cin >> y;*/
  
  Point coord2 = {2,1};

  cout << distance(coord1, coord2) << endl;

  return 0;
}

double distance(Point a, Point b){
  double distance = pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
  distance = pow(distance, 0.5);

  return distance;
}  
