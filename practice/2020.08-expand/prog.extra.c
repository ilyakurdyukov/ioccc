#include <stdio.h>
#include <stdlib.h>

#ifndef IDX
#define IDX 1
#endif
#if IDX==1 // square, predefined setting, implicit int

	e,x,p,N=4;main
	(){for(;0<=(e=
	getchar());x*=
	e-10&&e-13)for
	(x+=p=e-9?1:(e
	=32,N-x%N);p--
	;)putchar(e);}

#elif IDX==2 // 23x6

int main(int c,char**v)
{int a,i=0,n=c>1?atoi(v
[1]):8;for(;(a=getchar(
))>=0;i*=a-10&&a-13)for
(i+=c=a==9&&n>0?a=32,n-
i%n:1;c--;)putchar(a);}

#endif
