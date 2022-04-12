// -std=c++14
#include <stdio.h>
#define O(o,x)X \
  operator o(){ return X{x}; }
struct X {
  int x = 1;
  O(*,x*2+1) O(~,x*2) O(!,!!putchar(x))
};
int main() {
  !~*~    !*~~~~ 
  !~~*~~* !~~**~*
  !~*~~** !****~*
  !***~*~ !~~~~~
  !~~**~  !****~*
  !~~**~* !~~**~*
  !*~*~~* !~~~*~~
  X();
}

