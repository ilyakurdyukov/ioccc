#ifndef IDX
#define IDX 1
#endif
#if IDX==1

 #include<stdio.h>
int main(){unsigned
long long a,b,c=0,d
=255;for(;a=getchar
 (),a<=d;c^=d<<56)
for(c^=a,b=8;b--;)c
=0xc96c5795d7870f42
&(c%2-1)^c/2;printf
 ("%016llx\n",c);}

#elif IDX==2 // smaller and more slower

/* Will not work correctly if unsigned long long is
   longer than 64 bits, which is allowed by the standard. */

 #include<stdio.h>
int main(){unsigned
long long a,b=0,c=~
b;for(;256>(a=b--&7
?0:getchar());c=c/2
^0xc96c5795d7870f42
&0-c%2)c^=a;printf(
 "%016llx\n",~c);}

#endif
