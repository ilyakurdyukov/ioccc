#include <stdio.h>

static struct X {
	void* operator new[](size_t) { return (char*)&1[""]; }
	void operator delete[](void*) { }
	X() : X((char*)this - "") { }
	X(char i) {
		printf(i%3?i%5?"%s%i\n":"%s\n":"Fizz%s\n",i%5?"":"Buzz",i);
	}
} *x = new X[100]();

int main(){}
