#include <stdio.h>
#include <string.h>

int main() {
  const char *s = "Hello, World!\n";
  int i, n = strlen(s);
  while (n--)
    for (i = 0; i < 7; i++)
      printf(s[n] >> i & 1 ? "-- " : "- ");
  puts("- --");
}

