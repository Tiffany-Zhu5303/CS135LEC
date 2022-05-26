#include <iostream>
#include <vector>

//4 - Define a method, for a given array of strings, if every string in the array has at least 8 characters
//then return true, otherwise(at least one string has fewer than 8 characters), return false
bool checkLength(std::string strings[]){
  for(int i = 0; i < sizeof(strings)/sizeof(strings[0]); i++){
    if(strings[i].length() < 8){
      return false;
    }
  }
  return true;
}

//6 - Define a class Triangle. Each triangle has three edges, let us call it a, b, c, where the size of any
//two edges is larger than the third one. For simplicity, assume the edges are integers.

//6.1 - Declare class Triangle with data members and a constructor with three integer parameter
class Triangle{
private:
  int a;
  int b;
  int c;
public:
  Triangle(int A, int B, int C);
};

//6.2 - Define a constructor to take three parameters, if the given parameters are all positive
//and sum of any two parameter is larger than the third one, then use them to initialize
//the corresponding data members, otherwise set a, b, c, to 1
Triangle::Triangle(int A, int B, int C){
  int ab = a + b;
  int ac = a + c;
  int bc = b + c;
  bool aru = false;
  if(A >= 0 || B >= 0 || C >= 0){
    aru = true;
  }
  
  if(ab < bc && ac < bc && aru == true){
    a = A;
    b = B;
    c = C;
  }else if(ab < ac && bc < ac && aru == true){
    a = A;
    b = B;
    c = C;
  }else if(ac < ab && bc < ab && aru == true){
    a = A;
    b = B;
    c = C;
  }else{
    a = 1;
    b = 1;
    c = 1;
  }
}

//7 - Given person class , extend it and define doctor class
class Person{
private:
  std::string Name;
  int Age;
public:
  Person();
  Person(std::string name);
  Person(std::string name, int age);
  std::string getName();
  int getAge();
  void setAge(int age);
  void setName(std::string name);
};

Person::Person(){
  name = "anonymous";
  age = 18;
}

Person::Person(std::string name){
  Name = name;
  age = 18;
}

Person::Person(std::string name, int age){
  Name = name;
  if(age < 131 && age >= 0){
    Age = age;
  }else{
    Age = 18;
  }
}

std::string Person::getName(){
  return Name;
}

int Person::getAge(){
  return Age;
}

void Person::setAge(int age){
  if(age < 131 && age >= 0){
    Age = age;
  }else{
    Age = 18;
  }
}

void Person::setName(std::string name){
  Name = name;
}

class Doctor: public Person{
private:
  std::vector<std::string> insurances;
publice:
  Doctor();
  bool found(std::string insurance);
};

Doctor::Doctor(){
  insurances.push_back("medicaid");
  insurances.push_back("medicare");
}

bool Doctor::found(std::string insurance){
  for(int i = 0; i < insurances.size(); i++){
    if(std::find(insurances.begin(), insurances.end(), insurance) != insurances.end()){
      return true;
    }
  }
  return false;
}
  

int main(){
  //1.1 - To find out the square root of 4, we can use sqrt(4)
  std::cout << "For 1.1: I think this is true\n" << std::endl;

  //1.2 - An object is the blueprint from which classes are made
  std::cout << "For 1.2: I think this is false\n" << std::endl;

  //1.3 - Encapsulation (also called information hiding) combines data members
  //and method members and hide the implementation details from the clients
  //of a class
  std::cout << "For 1.3: I think this is false\n" << std::endl; //this is true

  //1.4 - In general, it is a good practice to access data members of one class from
  //another class without using getter methods of the former class
  std::cout << "For 1.4: I thinks this is false\n" << std::endl;

  //1.5 - Since each manager is an employee, we can design Manager class as a subclass
  //of Employee class
  std::cout << "For 1.5: I think this is true\n" << std::endl;

  //1.6 - A method can use a pointer to superclass as parameter. When we call this method,
  //we cannot pass a pointer to subclass object of the subclass to that method
  std::cout << "For 1.6: I think this is false\n" << std::endl;

  //1.7 - A static data member of a class is stored in every object
  std::cout << "For 1.7: I think this is true\n" << std::endl; // this is false 

  //1.8 - A virtual method declared in superclass can be overridden in subclassed
  std::cout << "For 1.8: I think that this is not going to be on the exam\n" << std::endl;

  //1.9 - The size of one dimensional array arr can be found by arr.size()
  std::cout << "For 1.9: I think this is false\n" << std::endl;

  //1.10 - In general, when we define a class, we should declare data members as public
  //and operations on those data members as private
  std::cout << "For 1.10: I think this is false\n" << std::endl;

  //2.1 - Given string names[][3] = {{"Ann", "Bonny", "Cheryl",}, {"Abel", "Bob", "Charles"}}
  //What is name[1][0].size()
  std::cout << "For 2.1: I think this is choice B(4)\n" << std::endl;

  //2.2 - What is vect.size() after the followint code?
  std::vector<int> vect;
  vect.push_back(1);
  vect.push_back(2);
  vect.pop_back();
  vect.push_back(3);

  std::cout << "For 2.2: I think this is choice C(2)\n" << std::endl;

  //2.3 - Given int arr[] = {0, 1, 6}, what is the value of arr[3]
  std::cout << "For 2.3: I think this is choice D(Invalid since the maximum index of arr is 2\n" << std::endl;

  //2.4 - Choose all valid statements. Which of the following is most appropriate?
  std::cout << "For 2.4: I think the best choice is B(double b = 2;)\n" << std::endl; // this is D

  //2.5 - What is the value of 1 / 2 * 3.0
  std::cout << "For 2.5: I think this is choice A(0)\n" << std::endl;

  //2.6 -> too long
  std::cout << "For 2.6: I think this is choice idk\n" << std::endl; //this is a

  //2.7 - too long
  std::cout << "For 2.7: I think this is choice idk\n" << std::endl; //this is A

  //2.8 - Suppose we have Rectangle class, which has data member length and width.
  //what can we say about the constructor Rectangle?
  std::cout << "For 2.8: I think this is choice C(We can have constructor Rectangle(int length) and Rectangle(int width) at the same time\n" << std::endl; //this should be d

  //2.9 - too long
  std::cout << "For 2.9: I think this is choice D(None of the above\n" << std::endl; //this should be c

  //2.10 -???

  //2.11 - What is the best way to describe an array?
  std::cout << "For question 2.11: I think this is choice C(We can only create an array of primitive type\n" << std::endl;

  //2.12 - too long
  std::cout << "For question 2.12: idk\n" << std::endl;

  //2.13 - Suppose Dog class is inherited from Animal class. What is the proper head?
  std::cout << "For question 2.13: I think this is choice D(class Dog: public Animal)\n" << std::endl;

  //2.14 - When we define a class inherited from some class, what should we do?
  std::cout << "For question 2.14: I think this is choice D(All of the above)\n" << std::endl;

  //2.15 - What is the output of the following code
  int arr2[] = {1, 2, 3, 4};
  int *p = arr;
  p += 3;
  std::cout << *p << std::endl;

  std::cout << "For question 2.15: I think this is choice D(4)\n" << std::endl;

  //2.16 - Given the following code, what is ch?
  std::string message = "Hello";
  char ch = message[1];

  std::cout << "For question 2.16: I think this is choice B(Letter e)\n" << std::endl;

  //2.17 - How to release memory applied through in int* arr = new int[10]
  std::cout << "For question 2.17: I think this is choice D(delete[] arr; arr = nullptr)\n" << std::endl;

  //2.18 - What is the output of the following code?
  int m = 5;
  int n = 6;
  m = n;
  n = m;

  std::cout << "For question 2.18: I think this is choice D(Variable m is 6, n is 6)\n" << std::endl;

  //2.19 - What is the output of the following code?
  double grade = 68.9;
  switch((int)grade/10){
  case 10:
  case 9:
  case 8:
  case 7:
  case 6:
    std::cout << "pass" << std::endl;
  default:
    std::cout << "fail" << std::endl;
  }

  std::cout << "For question 2.19: I think this is choice A(pass)\n" << std::endl;

  //2.20 - What is correct about array in C++?
  std::cout << "For question 2.20: I think this is choice D(Both (B) and (C))\n" << std::endl;

  //3.1 - correct the code
  std::cout << "For question 3.1: I don't think you need temp to be a pointer. Or I might be wrong\n" << std::endl;

  //3.2 - What is the output of the code?
  std::cout << "For question 3.2: I think this is 357\n" << std::endl;

  //5 - Define a two-dimensional array with 5 rows, the nth row has n columns, where 1 <= n <= 5.
  //The data of the array is as follows. Define and initialize the array, then print the array
  //out as follows
  int twoD[5][];
  int num = 0;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j <= i; j++){
      twoD[i][j] = num;
      num++;
      std::cout << twoD[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}
