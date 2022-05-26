//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: lab quiz 14

//func vector<int> makeVectors(int n) which, if n is positive, return a vector of ints of 0 to n-1. Otherwise return empty vector

#include <iostream>
#include <vector>

using namespace std;

vector<int> makeVector(int n){
  vector<int> vector;    
  if(n > 0){
    for(int i = 0; i < n; i++){
      vector.push_back(i);
    }
  }else{
    vector = {};
  }

  return vector;
}
    
int main(){
  int num = 5;

  vector<int> vector = makeVector(num);

  if(vector.size() > 0){
    for(int i = 0; i < num ; i++){
      cout << vector[i] << endl;
    }
  }

  return 0;
}
