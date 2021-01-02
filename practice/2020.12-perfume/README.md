### Spirit of X86

A bottle of perfume with the fragrance of the x86/x86_64 instruction set.  
Inhale only in a Linux environment.  

Ingredients:  
- 70% bouquet of assembly
- 15% essence of Linux syscall
- 10% dried Hello World
- 5% interleaved opcodes

### What's this?

Here's what this code does (but using syscalls, not stdlib):

```c
  const char *m = "Hello World!\n";
  fwrite(m, 1, strlen(m), stdout);
  exit(0);
```

So you can change the message at the end of the "main" string and it will be printed.
