//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E6.8

//To have a function that checks whether 2 arrays are have the same elements in the same order

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
  /*for(int i = 0; i < a_size; i++){
    cout << a[i] << endl;
  }

  for(int i = 0; i < b_size; i++){
    cout << b[i] << endl;
    }*/
  
  
  if(a_size != b_size){
    return false;
  }else{

    for(int i = 0; i < a_size; i++){

      if(a[i] != b[i]){
	return false;
      }
	
    }
  }

  return true;
}

int main(){
  /*int a[] = {1, 2, 3, 4, 5};
  int b[] = {5, 4, 3, 2, 1};

  int sizeA = sizeof(a)/sizeof(a[0]);
  int sizeB = sizeof(b)/sizeof(b[0]);*/

  int sizeC, sizeD;
  cout << "how many elements are in the first array?" << endl;
  cin >> sizeC;

  cout << "how many elements are in the second array?" << endl;
  cin >> sizeD;

  cout << "\nFor the first array : \n" << endl;
  
  int c[sizeC], d[sizeD];
  for(int i = 0; i < sizeC; i++){
    cout << "enter an integer" << endl;
    cin >> c[i];
  }

  cout << "For the second array : \n" << endl;
  for(int i = 0; i < sizeD; i++){
    cout << "enter an integer" << endl;
    cin >> d[i];
  }

  cout << equals(c, sizeC, d, sizeD) << endl;

  return 0;
}
