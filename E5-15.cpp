//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E5.15

//To have a function that swaps the 3 int variables in order from smallest to largest

void sort3(int&a, int&b, int&c){
  
  int saveA = a;
  int saveB = b;
  int saveC = c;

  //a, c, b
  if (a < b && a < c && c < b){
    b = saveC;
    c = saveB;
    //b, a, c
  } else if ( b < a && b < c && a < c){
    a = saveB;
    b = saveA;
    c = saveC;
    //b, c, a
  } else if ( b < a && b < c && c < a){
    a = saveB;
    b = saveC;
    c = saveA;
    //c, a, b
  } else if ( c < a && c < b && a < b){
    a = saveC;
    b = saveA;
    c = saveB;
    //c, b, a
  } else if ( c < a && c < b && b < a ) {
    a = saveC;
    c = saveA;
  }

}

int main(){
  int a = 11;
  int b = 15;
  int c = 21;

  sort3(a, b, c);
  sort3(a, c, b);
  sort3(b, a, c);
  sort3(b, c, a);
  sort3(c, a, b);
  sort3(c, b, a);
}

  

