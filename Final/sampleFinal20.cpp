#include <iostream>
#include <vector>

//3 - Suppose we want to define a swap method to swap the variables a and b. That is suppose
//int x = 1; int y = 2; After swap(x, y), variable x is 2 and y is 1
void swap(int& x, int& y){
  /*int *savex = x;
  int *savey = y;

  x = savey;
  y = savex;
  */

  int temp = y;
  x = y;
  y = temp;
}

//4 - Define a function, for a given array of strings, return one with maximum number of
//characters. If there are several strings having the same maximum number of characters
//return the first one(the one with minimum index
std::string maxChar(std::vector<std::string> strings){
  int count = 0;
  int spaces = 0;
  int index = 0;
  
  /*for(int i = 0; i < strings.size(); i++){
    for(int j = 0; j < strings[i].length(); j++){
      if(strings[i][j] == "" || strings[i][j] == " "){
	spaces++;
      }
    }
    if(strings[i].length() - spaces - 1 > count){
      count = strings[i].length() - spaces - 1;
      spaces = 0;
      index = i;
    }
    }*/

  return strings[index];
}

//5 - Define class TV, which has data member brand(a string) and size(an int)
class TV{
private:
  std::string brand;
  int size;
public:
  TV();
  int getSize();
};

//5.1 - Define the default constructor of TV, which sets brand to be "LG", and size to
//be 50
TV::TV(){
  brand = "LG";
  size = 50;
}

//5.2 - Define getSize method
int TV::getSize(){
  return size;
}

int main(){
  //1.1 - A class is a blueprint from where objects are made
  std::cout << "For 1.1: I think this is true\n" << std::endl;

  //1.2 - Methods in a subclass can access private data members in a superclass without going
  //through provided setters and getters
  std::cout << "For 1.2: I think this is false\n" << std::endl;

  //1.3 - Suppose Hare is a subclass of Animal class. Then for any method takes a Hare object,
  //we can pass an Animal object
  std::cout << "For 1.3: I think this is false\n" << std::endl;

  //2.1 - Given int arr[][2] = {{0, 1}, {2, 3}, {4, 5}}, arr[1][1] is?
  std::cout << "For 2.1: I think this is choice D (3)\n" << std::endl;

  //2.2 - Given vector<int> vect(2); What is the value of vect.size()?
  std::cout << "For 2.2: I think this is choice C(2)\n" << std::endl;

  //2.3 - Suppose Hare class is inherited from Animal class. What is the proper head?
  std::cout << "For 2.3: I think this is choice C(class Hare :  public Animal)\n" << std::endl;

  
  return 0;
}
