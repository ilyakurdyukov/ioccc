#include <stdio.h>
#include <stdlib.h>
int main(int c,char**v){int a,i=0,n=c>1?atoi(v[1]):8;for(;(a=getchar())>=0;i*=a-10&&a-13)for(i+=c=a==9&&n>0?a=32,n-i%n:1;c--;)putchar(a);}
