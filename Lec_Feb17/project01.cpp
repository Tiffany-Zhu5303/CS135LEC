#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num;
  char oper;

  /*Steps:
   For 1-2-3 
   initialize sum to be zero
   read num, put 1 in num
   add num to sum, sum is changed to be 1

   read operator for the next num, put '-' in oper
   read num, put 2 in num
   based on operator oper, subtract num from sum, so sum is -1

   read operator for the next num, put '-' in oper
   read num, put 3 in num
   based on operator oper, subtract num from sum, so sum is -4

   report num

   organize the above into a repetion*/

  while(cin >> num){
    //cout << "num = " << num << endl; //debug
    if(oper == '+'){
     sum += num;
    }else if(oper == '-'){
      sum -= num
	}
    //cout << "surrent sum = " << sum << endl;
  }

  cout << sum << endl;

  return 0;
}
