//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E6.18

//To have a function that appends one vector to the other

#include <iostream>
#include <vector>

using namespace std;

vector<int> append(vector<int> a, vector<int> b){
  for(int i = 0; i < b.size(); i++){
    a.push_back(b.at(i));
  }

  return a;
}

