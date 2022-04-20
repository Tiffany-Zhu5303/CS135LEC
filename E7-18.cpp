//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E7-18

//To have a structure Triangle which contains three Point members which
//computes the perimeter of the triangle

#include <iostream>
#include <math.h>
using namespace std;

class Point {
public:
  double x, y;

};

class Triangle {
public:
  Point pointA;
  Point pointB;
  Point pointC;
};

double perimeter(Triangle triangle);

int main(){
  Triangle triangle;
  cout << "enter a x value for the first point followed by the y value of the first point" << endl;
  cin >> triangle.pointA.x >> triangle.pointA.y;

   cout << "enter a x value for the second point followed by the y value of the second point" << endl;
  cin >> triangle.pointB.x >> triangle.pointB.y;

   cout << "enter a x value for the third point followed by the y value of the third point" << endl;
  cin >> triangle.pointC.x >> triangle.pointC.y;
  
  cout << perimeter(triangle) << endl;

  return 0;
}

double perimeter(Triangle triangle){
  double sideA = pow(triangle.pointA.x - triangle.pointB.x, 2) + pow(triangle.pointA.y - triangle.pointB.y, 2);
  sideA = pow(sideA, 0.5);
  
  double sideB = pow(triangle.pointC.x - triangle.pointB.x, 2) + pow(triangle.pointC.y - triangle.pointB.y, 2);
  sideB = pow(sideB, 0.5);
  
  double sideC = pow(triangle.pointA.x - triangle.pointC.x, 2) + pow(triangle.pointA.y - triangle.pointC.y, 2);
  sideC = pow(sideC, 0.5);

  double sum = sideA + sideB + sideC;

  return sum;
}

