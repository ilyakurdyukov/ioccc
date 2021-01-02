#ifndef IDX
#define IDX 1
#endif
#if IDX==1
#include <time.h>
#include <stdio.h>

        int main(
     ){int x=-   44,
   a=2551443,b=-    x,
  y=2-b,z=(time(0     )
 -592531)%a*512/a      ;
 for(;y<=b;putchar     (
 ++x>=a?x=-b,y+=4,     9
 ^3:x<0?x=x*x+y*y      <
  b*b?a=1-x,-1:x+     1
   ,32:"#."[(x<a    *(
     ~z&255)>>   8)^
        z>>8]));}

#elif IDX==2 // no keywords
#include <time.h>
#include <stdio.h>

        a,b=44,x,
     y,z;main()  {!a
   ?a=2551443,x=    -b
  ,y=2-b,z=((time     (
 0)-592531)%a<<9)/     a
 :putchar(++x>=a?x     =
 -b,y+=4,10:x<0?x=     x
 *x+y*y<b*b?a=1-x,     -
  1:x+1,32:"#."[(     x
   <a*(~z&255)>>    8)
     ^z>>8]),y>  b?0
        :main();}

#elif IDX==3 // includes included

        #include\
     /*___*/<time.h>
   #include  <stdio.h>
  int main(){int a=0,b=
 44,x=2551443,y=-2-b,z=(
 (time(0)-592531)%x<<9)/
 x;for(;x<a||(x=-b,y+=4)
 <=b;)putchar(++x<0?x=x*
  x+y*y<b*b?a=1-x,-1:x+
   1,32:x<a?"#."[z>>8^
     (x<a*(~z&255)>>
        8)]:10);}

#endif
