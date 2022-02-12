#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num;
  char operation;

  cin >> num;
  sum = sum + num;
  
  while (cin >> operation){
    if (operation == '+'){
      cin >> num;
      sum = sum + num;
    }else if (operation == '-'){
      cin >> num;
      sum = sum - num;
    }else if (operation == ';'){
      cout << sum << "\n";
      sum = 0;
      cin >> num;
      sum = sum + num;
    }
  }
  
  return 0;
}
