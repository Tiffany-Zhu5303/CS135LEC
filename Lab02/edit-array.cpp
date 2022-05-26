#include <iostream>

int main(){
  //make array and fill with one
  int myData[10];
  
  //printing intial array
  for(int index  = 0; index < 10; index++){
    myData[index] = 1;
    std::cout << myData[index] << " ";
  }
  
  int i, v;
  do{
    //get the i and v from the user
    std::cout << "\n\nInput index: ";
    std::cin >> i;
    std::cout << "Input value: ";
    std::cin >> v;

    //Checking range
    if(i < 10 && i>= 0){
      myData[i] = v;
      }
    else{
      std::cout << "Index out of range. Exit.\n";
      break;
    }

    //printing new array
    for(int index = 0; index < 10; index++){
      std::cout << myData[index] << " ";
    }
  } while (i <= 10 && i >= 0);

  return 0;
}
