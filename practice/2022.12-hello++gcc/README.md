### Hello G++

Obfuscated C++ Hello World code that only GCC can compile. At first I thought it was an EDG-frontend bug, but it seems to be a GCC feature because Clang can't compile it either.

This is what the problem looks like if you don't want to deobfuscate the code:

```c++
template<int i=0, int j=0> struct a {};
template<template<int> typename b, int i>
int x(b<i>) { return i; }
int main() { return x(a()); }
```

So GCC can deduce the second template argument when the template is specified with one argument, since the second argument can be found by other types or has a default value. Whether this is correct in terms of the standard - I don't know.
