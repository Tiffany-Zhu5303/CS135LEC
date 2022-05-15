//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E6-20

//To have a function that merges two sorted vectors which produces a new
//sorted vector

#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
  vector<int> merged;
  int sizeA = a.size();
  int sizeB = b.size();
  int indexA = 0;
  int indexB = 0;
  
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  while(indexA < sizeA && indexB < sizeB){
    if(a.front() <= b.front()){
      merged.push_back(a.front());
      a.erase(a.begin());
      indexA++;
    }else{
      merged.push_back(b.front());
      b.erase(b.begin());
      indexB++;
    }
  }

  while(indexA < sizeA){
    merged.push_back(a.front());
    a.erase(a.begin());
    indexA++;
  }

  while(indexB < sizeB){
    merged.push_back(b.front());
    b.erase(b.begin());
    indexB++;
  }
  
  return merged;
}

int main(){
  vector<int> first = {0, 4, 3, 1, 2};
  vector<int> second = {3, 4, 7, 5, 8};

  vector<int> third = merge_sorted(first, second);

  for(int i = 0; i < third.size(); i++){
    cout << third.at(i) << endl;
  }

  return 0;
}
