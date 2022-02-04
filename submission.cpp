//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E2.10

//program asks user to input gallons of gas in tank, miles
//per gallon, and price of gas per gallon
//Then program prints the cost per 100 miles and how far the 
//car can go
#include <iostream>
using namespace std;

int main(){
    float gallons, miles_per_gallon, cost_per_gallon; 

    cout << "gallons of gas are in the tank: ";
    cin >> gallons;

    cout << "Miles per gallon: ";
    cin >> miles_per_gallon;

    cout << "Cost per gallon: ";
    cin >> cost_per_gallon;

    float total_cost_miles, cost_per_mile, total_miles;
    total_cost_miles = cost_per_gallon * miles_per_gallon;
    cost_per_mile = total_cost_miles / 100;
    total_miles = gallons * miles_per_gallon;
    
    cout << "The cost per 100 miles is " << cost_per_mile << ".\n";
    cout << "The car can travel " << total_miles << " miles.";
    
    return 0;
}