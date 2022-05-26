#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

//Question 1.1: Declare class Undergraduate as a subclass of Student and inherit its
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
};

//Question 1.4: Write the header of a function foo, for given string str and an int
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

//Question 1.6: Declare a struct called Person, which includes the following
//data members: name as a string and age as an int
struct Person{
  std::string name;
  int age;
};

char numToLetter(int grade){
  char letter;
  if (grade >= 90)
    letter = 'A';
  else if (grade >= 80)
    letter = 'B';
  else if (grade >= 70)
    letter = 'C';
  else if (grade >= 60)
    letter = 'D';
  else letter = 'F';
  return letter;
}

class Computer {
public:
 Computer(){
   id = id_generator; //this is 1?
   id_generator++; //then it increases to 2?
 }
 int get_id() const{
 return id;
 }
private:
 static int id_generator;
 int id;
};

int Computer::id_generator = 1;

//Question 2.2: Define a recursive function that takes an int, return its number of
//digits.

//Question 2.2.1: Define function header. The function name is numDigits, the given
//parameter is num

int numDigits(int num){

  //Question 2.2.2: If num has only one digit (can be negative), return 1;
  if(num / 10 == 0){
    return 1;
  }else{
    return 1 + numDigits(num/10);
  }
}

//Question 2.3: Define a function foo, for a given array arr of ints and its size,
//return type is empty

//Question 2.3.1: Define the function header
void foo(int arr[], int size){

  //Question 2.3.2: For each adjacent pair arr[i] and arr[i+1] in arr, if arr[i] equals
  //arr[i+1], set arr[i] to be 0 and replace arr[i+1] by twice of arr[i+1]
  for(int i = 0; i < size; i ++){
    if(i + 1 < size && arr[i] == arr[i+1] && i == 0 || i % 2 == 0){
      arr[i] = 0;
      arr[i+1] = 2 * arr[i+1];
    }
  }
}

//Question 3.1: Define a function, for a vector of strings and a target string, find out
//whether the target string is in this vector or not. If yes, return true, otherwise
//return false
bool find(std::vector<std::string> strings, std::string target){
  for(int i = 0; i < strings.size(); i++){
    //  if(std::find(strings.begin(), strings.end(), target) != strings.end()){
    if(strings[i] == target){
      return true;
    }
  }
  return false;
}

//Question 3.2: Define function, for two vectors of strings vectA and vectB, find out all the
//strings that are common in vectA and vectB, put them in a vector. Return that vector.
std::vector<std::string> common(std::vector<std::string> vectA, std::vector<std::string> vectB){
    std::vector<std::string> common;
    if(vectA.size() <= vectB.size()){
      for(int i = 0; i < vectA.size(); i++){
	if(std::find(vectB.begin(), vectB.end(), vectA[i]) != vectB.end()){
	  common.push_back(vectA[i]);
	}
      }
    }else{
      for(int i = 0; i < vectB.size(); i++){
	if(std::find(vectA.begin(), vectA.end(), vectB[i]) != vectA.end()){
	  common.push_back(vectB[i]);
	}
      }
    }

    return common;
  }

//Question 4: Define class Circle
//Question 4.1: Data member is radius, which is a number that may contain decimal numbers
class Circle{
private:
  double radius;
public:
  Circle();
  Circle(double radius);
  void reset(int newNum);
  int getter();
  int getArea();
};

//Question 4.2: Default constructor sets radius to be 1
Circle::Circle(){
  radius = 1;
}

//Question 4.3: Non-default constructor sets radius to be integer in given parameter if it
//is positive. If it is not then set the radius to be 1
Circle::Circle(double radius){
  if(radius > 0){
    radius = radius;
  }else{
    radius = 1;
  }
}

//Question 4.4: Resets radius if the given integer in parameter is positive. If not then
//don't do anything to it
void Circle::reset(int newNum){
  if(newNum > 0){
    radius = newNum;
  }
}

//Question 4.5: Define a method to get data member radius
int Circle::getter(){
  return radius;
}

//Question 4.6: Define a method to get the area of a circle.
int Circle::getArea(){
  return M_PI * sqrt(radius);
}

//Question 5: Define NUM_COLUMNS as a const with value 3. Define a method for a 2D array
//of chars with NUM_COLUMNS columns, check whether there is a column with all 'O' characters
bool check(int *arr[], int numCols, int numRows){
  for(int i = 0; i < numRows; i++){
    int count = 0;
    for(int j = 0; j < numCols; j++){
      if(arr[i][j] = 'O'){
	count++;
      }
    }
    if(count == numCols){
      return true;
    }
  }
  return false;
}

int main(){
  //Question 1.2: Declare a vector of ints, call it ages. Initalize 17, 36, 65.
  std::vector<int> ages = {17, 36, 65};

  //Question 1.3: Suppose int arr[] = {2, 3, 4); What is *arr + *(arr+1)
  int arr[] = {2, 3, 4};

  std::cout << "For question 1.3:\n " << *arr + *(arr + 1) << std::endl;
  //Answer 1.3: 5 --> *arr --> arr[0] and *(arr + 1) --> arr[1]

  //Question 1e: What is the possible values of (1 + rand()) % 12 + 3?
  std::cout << "\nFor question 1.5:\n "  << (1 + rand()) % 12 + 3 << std::endl;
  //Answer 1.5:

  //Question 1.7: What is the output for the following code:
  int grades[] = {20, 60, 89, 90, 100};
  int size = sizeof(grades) / sizeof(grades[0]);
  int value = 0;
  char letter;
  for (int i = 0; i < size; i++){
    letter = numToLetter(grades[i]);
    if (letter == 'A' || letter == 'B')
      value++;
  }

  std::cout << "\nFor question 1.7:\n " << value << std::endl;
  //Answer 1.7: 3
  
  //Question 1.8: Read the following code. What is the output?
  Computer first;
  Computer second;
  std::cout << "\nFor question 1h:\n " << second.get_id() << std::endl;
  //Answer 1.8: 1? --> wrong it's actually 2
  //it runs the constructor first!!!

  //Question 1.9: Declare and initialize a two-dimensional int array called arr will
  //two row 1, 2, 3, 4, 5, the second row 6, 7, 8, 9, 10
  int arr2[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

  //Question 1.10: What is the output of the following code?
  std::cout << "\nFor question 1.10:\n " << std::endl;
   for (int i = 1; i <= 2; i++){
     for (int j = 1; j <= 3; j++)
       std::cout << i * j << " ";
     std::cout << std::endl;
   }

   //Answer 1.10:
   /*1(1) 1(2) 1(3)
     2(1) 2(2) 2(3)*/

   //Question 2.1.1: Declare an int variable call it size and initialize it to be 10. Create
   //a one-dimensional dynamic allocated memory array, call it data, of ints whose capacity
   //is size
   size = 10;
   int *data = new int[size];

   //Question 2.1.2: Set each element of data to be a random int in [60, 100];
   std::cout << "\nFor question 2.1.2: " << std::endl;
   for(int i = 0; i < size; i++){
     data[i] = rand() % 41 + 60;
     std::cout << data[i] << std::endl;
   }

   //Question 2.1.3: Write code to find out the average of array data
   int total = 0;
   for(int i = 0; i < size; i++){
     total += data[i];
   }

   total /= size;

   std::cout << "\nFor question 2.1.3:\n" << total << std::endl; 
   
   delete[] data;
   data = nullptr;

   std::cout << "\nFor question 2.2:\n" << total << " has " << numDigits(total) << " digits and 402 has " << numDigits(402) << " digits" << std::endl;

   //Question 2.3.3: After applying foo on arr3, what does the array look like?
   std::cout << "\nFor question 2.3.3:" << std::endl;
   int arr3[] = {2, 2, 1, 1, 0};

   foo(arr3, 5);

   for(int i = 0; i < 5; i++){
     std::cout << arr3[i] << std::endl;
   }

   std::vector<std::string> date = {"today", "is", "May", "fifteen"};
   std::cout << "\nFor question 3.1:\n" << find(date, "May") << std::endl;

   std::vector<std::string> date2 = {"yesterday", "is", "May", "fourteen"};
   date = common(date, date2);

   std::cout << "\nFor question 3.2: " << std::endl;
   for(int i = 0; i < date.size(); i++){
     std::cout << date[i] << std::endl;
   }

   //Question 5
   const int NUM_COLUMNS = 3;
   

  return 0;
}
