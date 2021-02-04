
	#include<stdio.h>
	void f(const char
	*s){int a=-*s,n=0
	;for(;a;n*=!(*s-a
	&&printf(n?"(\"%"
	"c\", %d)%s":"[",
	a,n,*s?", ":"]\n"
	)),n+=1,a=*s++);}
	                 int main
	                 (){f("a"
	                 "aaabbb"
	                 "cca");}

