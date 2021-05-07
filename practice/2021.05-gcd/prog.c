#ifndef IDX
#define IDX 1
#endif
#include <stdio.h>
#include <stdlib.h>
#if IDX==1 // hexagon

       a,b;main(int
     x,char**y){!b&&(
    x-=!          !x)?
   a*=!            !(b=
  atoi              (y[x
  ])):              b,b?
   b^=a            =a%b
    ^b,a          ^=b,
     main(x,y):printf
       ("%i\n",a);}

#elif IDX==2 // frame

      a,b;main(int
    x,char**y){for(;
   !b&&          --x?
   a*=!          !(b=
   atoi          (y[x
   ])):          b,b;
   a^=b          )a=a
    %b^b,b^=a;printf
      ("%i\n",a);}

#elif IDX==3 // rectangle

  a,b;main(int x,char
  **y){for(;!b&&--x?b
  =atoi(y[x]),a*=!!b:
  b,b;a^=b)b^=a=a%b^b
  ;printf("%i\n",a);}

#endif
