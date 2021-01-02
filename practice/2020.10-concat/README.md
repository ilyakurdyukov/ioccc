### concat-hello

By using macro concatenation almost anything can be divided to standalone characters (except escapes and spaces), but it will take a lot of space, which is very limited by the IOCCC rules. Also you will have these concat macros at the start.

Unobfuscated code is:

```c
int main() { printf("Hello%cWorld!%c", 32, 10); }
```

The space has a numeric value of 32 and the newline character is 10, both of them cannot be encoded in the same way as other characters.
The same problem should be expected with parentheses and commas when used in a string.
