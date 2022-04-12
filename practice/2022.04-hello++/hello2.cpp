// -std=c++14
#include <stdio.h>
#define O(o,x)X operator o(){ \
  return X{(a=a*6+x)>>8?putchar(a),2:a}; }
struct X {
  int a = 2;
  O(&,1) O(*,2) O(-,3) O(~,4) O(!,5) O(+,6) 
};
int main() {
  +**!+*+!~*&!**!!&!!-~~+*~*-!&!*&!*&!&+~*&~
  X();
}

