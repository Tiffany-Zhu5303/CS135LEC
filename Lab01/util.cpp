#include "util.h"

int add2(int a, int b);

int add3(int a, int b, int c){
    int tmp = add2(a, b);
    return add2(tmp, c);
}