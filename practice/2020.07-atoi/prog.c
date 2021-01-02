#include <stdio.h>
int atoi(const char*s
){unsigned a,b=0,c=0;
for(;a=*s++,c||(a-9&&
a-32&&a-10&&a-13&&!(c
=1,a==45?c=-1:a==43))
?10>(a-=48)?b=b*10+a,
1:0:1;);;return b*c;}
int main(int c,char**
v){for(;--c>0;)printf
("%i\n",atoi(*++v));}

