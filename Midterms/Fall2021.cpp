#include <iostream>
using namespace std;

int main(){
  //Q1.1: What is the value of 6 / 5 * r * r * r when variable r is 2 in C++?
  int r = 2;

  cout << "Question 1.1: " << 6 / 5 * r * r * r << endl;

  //Q1.3: Write code to generate a random int in [100, 300].
  int value = rand() % 100 + 5;

  cout << value << endl;
  cout << "Question 1.3: " << rand() % 100 + 5 << endl;
  //rand() % (end - start + 1) + start;

  //Q1.4: Given array of strings as follows string greetings[] = {"Hello", "Morning", "Hi"};
  //What is the value for greetings[2].length()?

  string greetings[] = {"Hello", "Morning", "Hi"};
  cout << "Question 1.4: " << greetings[2].length() << endl;

  //Q1.7: Write code to declare an array of int with size 100, call it scores. Initialize each element by 0.
  int scores[100];

  for(int i = 0; i < 100; i++){
    scores[i] = 0;
  }

  //Q1.10: Suppose n is an int, write code to throw away its last digit? For example, suppose n is 21, after your code, n should be 2.
  int n = 21;

  n = n/10;

  cout << "Question 1.10: " << n << endl;

  //Q2.1: Given three integers a, b and c, properly declared and initialized, write code to find out the largest number.
  int a = 4;
  int b = 18;
  int c = 3;

  if(a > b && a > c){
    cout << "Question 2.1: a is the largest number" << endl;
  }else if ( b > a && b > c){
     cout << "Question 2.1: b is the largest number" << endl;
  }else{
     cout << "Question 2.1: c is the largest number" << endl;
  }

  //testing at this point
  int num = 6;
  string result;
  result = to_string(num % 2) + result;
  num /= 2;

  result = to_string(num % 2) + result;
  num /= 2;

  cout << result << endl;

  num = 6;
  result = "";
  
  result = result + to_string(num % 2);
  num /= 2;

  result = result + to_string(num % 2);
  num /= 2;  

  cout << result << endl;

  cout << (1 + 5) / ( 3 * (2 - 1) ) << endl;

  int e = 2.00 / 0.55;

  cout << e << endl;
  
  return 0;
  
}

/*
Q1.2: Declare function foo whose input parameter is int and return is a string.
 You just need to write the function header, no implementation is needed.

-string foo(int) -> pass by value, formal parameter not named
-string foo(int&) -> pass by reference, formal parameter not named
-string foo(int num) -> pass by value, formal parameter not named
-string foo(int& num) -> pass by value, formal parameter named

Q1.5: Suppose we generate a.out, and we would like redirect the input from console to a file called data.txt. What is the command?
a.out < filename

Q1.6: What is the output of the following code?
int value = 1;
for (int i = 1; i < 6; i += 2)
 value *= i;
 cout << value;

Q1.8: What is the output of the following code?
for (int i = 0; i < 3; i++)
{
 for (int j = 0; j < 3; j++)
 if (i % 2 == j % 2)
 cout << "X";
 else cout << "O";
 cout << endl;
}

Q1.9: Write a condition to represent that both x and y are in the range of [0, 100], where both ends are included.
Suppose x and y are properly declared and initialized.

Condition: (x <= 100 && x >= 0 && y <= 100 && y >= 0)

*/
