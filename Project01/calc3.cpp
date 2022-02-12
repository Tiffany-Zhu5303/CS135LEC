#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num, squared, remnum;
  char operation;

  cin >> num;
  
  while (cin >> operation){
    if (operation == '+'&& squared > 0){
      sum = sum + squared;
      squared = 0;
    }else if(operation == '+'){
      cin >> num;
      sum = sum + num;
    }else if (operation == '-' && squared > 0){
      sum = sum - squared;
      squared = 0;
    }else if(operation == '-'){
      cin >> num;
    }else if (operation == '^'){
      squared = num * num;
    }else if (operation == ';' && squared > 0){
      sum = sum + squared;
      cout << sum << "\n";
      squared = 0;
      cin >> num;
      sum = num;
    }else if (operation == ';'){
      cout << sum << "\n";
      cin >> num;
      sum = num;
    }
  }
  
  return 0;
}
