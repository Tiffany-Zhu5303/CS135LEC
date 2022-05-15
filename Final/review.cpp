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

Method overload:
-same name
-similar functionality
-different signatures(parameter list differs in number, type, or order)

Method override:
-subclass inherits a method from superclass
-if method in subclass behaves different from superclass then
subclass method is overrided

 */
