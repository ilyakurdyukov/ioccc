#include <stddef.h>
#include <stdint.h>


        uint32_t/**   */crc32(void*             s,size_t n,
     uint32_t c){     uint32_t*a,o,x=        (uintptr_t)s&
    3;a=(             void*      )(s-x      );for
  (c=~c               ;n;x=       0)n-=   o=n>=
  4-x?4               -x:n,      x=c^*    a++>>
  x*8,x               <<=32-o--*8,c=c     >>8>>
  o*8,x               ^=x<<19,o=x^x       <<6^x
    <<9,x             =o^x*   4,o^=x        <<10^
     x<<24,x=o>>1^    o>>4,     c^=x>>       22,x=o>>16^x^
        x>>1,c^=o^o   >>12^      x^x>>6         ;return~c;}


#include <stdio.h>
/* usage example */
int main() {
	printf("check=0x%08x\n", crc32("123456789", 9, 0));
}
