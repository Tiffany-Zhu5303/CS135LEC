#include <iostream>

class Vehicle{
private:
  int fuel, capacity;
  bool brake;
public:
  Vehicle();
  Vehicle(int gas, int cap);
  int fuelAmount();
  int capacity();
  bool applyBrakes();
};

Vehicle::Vehicle(){
  fuel = 0;
  capacity = 100;
  brake = false;
}

Vehicle::Vehicle(int gas, int cap){
  fuel = gas;
  capacity = cap;
  brake = false;
}

int Vehicle::fuelAmount(){
  return fuel;
}

int Vehicle::capacity(){
  return capacity;
}

bool Vehicle::applyBrakes(){
  if(brakes == false){
    brakes = true;
    return true;
  }else{
    brakes = false;
    return false;
  }
}

class Bus : public Vehicle{
private:
  int fuel, capacity;
};

int main(){

  Bus first;
  first();
  first.Vehicle(3, 100);
  std::cout << first.fuelAmount() << std::endl;
  

  return 0;
}

/*
Passing by value:
type funcName(type &name)

Passing by reference:
type funcName(type name)

-----------------------------------------------------------------------------------------

static variable:
doesn't reset 

Initializing 2D arrays:
1. int x[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}
2. int x[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}} -> this is the better way

-----------------------------------------------------------------------------------------

Random numbers:
#include <stdlib.h>

syntax:
rand() % (end - start) + start

floating point in [start, end]
1.0 * rand()/RAND_MAX*(end - start + 1) + start


int ex1 = rand() % 100; --> range of 0 to 99
int ex2 = rand() % 100 + 1; --> range of 1 to 100
int ex3 = rand() % 30 + 1985 --> range of 1985 - 2014

----------------------------------------------------------------------------

Finding item in Vectors
#include <algorithm>

syntax:
if(std::find(vec.begin(), vec.end(), elementToFind);!= vec.end())

----------------------------------------------------------------------------

Struct: similar format to class except without the specification for access

syntax:
struct name{
membertype member name
}object_names;

----------------------------------------------------------------------------

Encapsulation: setter and getter

Inheritance: a class takes properties and characteristics from another one
-subclass: inherits properties from another class
-superclass/baseclass: properties that gets inherited by another class

syntax:
class sub_class : access type super_class{

body of subclass
};

ex: 
class Vehicle{
fuelAmount();
capacity();
applyBrakes();
};

this can apply to class Bus, class Car, classTruck;
class Bus : public Vehicle{

};

------------------------------------------------------------------------------

Method overload:
-same name
-similar functionality
-different signatures(parameter list differs in number, type, or order)

Method override:
-subclass inherits a method from superclass
-if method in subclass behaves different from superclass then
subclass method is overrided

 */
