#include <iostream>
#include <vector>

//Question 1a: Declare class Undergraduate as a subclass of Student and inherit its
//public members

class Student{
private:
  std::string name;
  int id;
public:
  Student(std::string stdName, int stdId);
  std::string setName(std::string stdName);
  int setId(int stdId);
  std::string getName(std::string name);
  int getId(int id);
};

class Undergraduate : public Student{
private:
  std::string name;
  int id;
};

//Question 1d: Write the header of a function foo, for given string str and an int
//representing index, if index is valid and the character at the index in str is
//a smaller letter, return true, otherwise, return false
bool foo(std::string str, int index){
  if(index < str.length() && index >= 0){

    std::string lower = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < lower.length(); i++){
      if(str[index] == lower[i]){
	return true;
      }
    }
  }

  return false;
}
      

int main(){
  //Question 1b: Declare a vector of ints, call it ages. Initalize 17, 36, 65.
  std::vector<int> ages = {17, 36, 65};

  //Question 1c: Suppose int arr[] = {2, 3, 4); What is *arr + *(arr+1)
  int arr[] = {2, 3, 4};

  std::cout << *arr + *(arr + 1) << std::endl;
  //Answer 1c: 5 --> *arr --> arr[0] and *(arr + 1) --> arr[1]

  return 0;
}
