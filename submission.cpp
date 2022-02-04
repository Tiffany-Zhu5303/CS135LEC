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

    cout << "gallons of gas in the tank: ";
    cin >> gallons;

    cout << "Miles per gallon: ";
    cin >> miles_per_gallon;

    cout << "Cost per gallon: ";
    cin >> cost_per_gallon;

    float cost_per_100mi, total_miles;

    cost_per_100mi = (100 / miles_per_gallon) * cost_per_gallon;
    total_miles = miles_per_gallon * gallons;
    
    cout << "The cost per 100 miles is " << cost_per_100mi << ".\n";
    cout << "The car can travel " << total_miles << " miles.";
    
    return 0;
}