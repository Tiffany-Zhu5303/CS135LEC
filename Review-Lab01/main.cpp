#include <iostream>
//"" after include makes it search locally 
#include "lib.h"
#include "util.h"

//this is a "signature" for the functions in other files
int add2(int a, int b);
int add3(int a, int b, int c);

int main(){
    int c, d;
    c = add2(5,10);
    std::cout << c << "\n";

    d = add3(5, 10, 15);
    std::cout << d << "\n";
    return 0;
}

//file_name.h is the include file for file_name.cpp
//it should include no code at all except in one case
//only declarations like function signatures
//if u have a function here then it's wrong

//g++ -E filename | less -> view other stuff being pulled into the file