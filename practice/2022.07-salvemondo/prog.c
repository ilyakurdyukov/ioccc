#ifndef IDX
#define IDX 1
#endif
#if IDX==1

#include <stdio.h>

int main() { puts((char[]){

 ~-~-~-~-~-~-~-~-~-~-~- 'S',
        -~-~-~-~        'a',
                        'l',
  ~-~-~-~-~-~-~-~-~-~-  'v',
  -~-~-~-~-~-~-~-~-~-~  'e',
                        ',',
                        ' ',
  -~-~-~-~-~-~-~-~-~-~  'M',
                        'o',
        -~-~-~-~        'n',
    -~-~-~-~-~-~-~-~    'd',
 ~-~-~-~-~-~-~-~-~-~-~- 'o',
                        '!',

                         0}); }


#elif IDX==2 // more cryptic

#include <stdio.h>

int main() { puts((char[]){

 ~-~-~-~-~-~-~-~-~-~-~- 'S',
 ~-~-~-~~-~-~-~-~-~-~-~ 'a',
 ~-~-~-~-~-~~-~-~-~-~-~ 'l',
 ~-~-~-~-~-~-~-~-~-~-~~ 'v',
 ~~-~-~-~-~-~-~-~-~-~-~ 'e',
 ~-~-~-~-~-~~-~-~-~-~-~ ',',
 ~-~-~-~-~-~~-~-~-~-~-~ ' ',
 ~~-~-~-~-~-~-~-~-~-~-~ 'M',
 ~-~-~-~-~-~~-~-~-~-~-~ 'o',
 ~-~-~-~~-~-~-~-~-~-~-~ 'n',
 ~-~~-~-~-~-~-~-~-~-~-~ 'd',
 ~-~-~-~-~-~-~-~-~-~-~- 'o',
 ~-~-~-~-~-~~-~-~-~-~-~ '!',

                         0}); }

#elif IDX==3 // encoder

#include <stdio.h>

int main() {
#if 1
#define PAD 11
	const char *s1 = "Salve, Mondo!";
	const char *s2 = "Hello, World!";
#else // test
#define PAD 5
	const char *s1 = "fffffffffff";
	const char *s2 = "abcdefghijk";
#endif
	int i;
	for (i = 0; s1[i]; i++) {
		int a = s1[i] - s2[i];
#if PAD
		int n = PAD - (a > 0 ? a : -a);
		int j = 0;
		if ((n & 1) ^ (a > 0))
		for (; j < n * 2; j++)
			putchar("~-"[((n^j)&1)^(j<n)]);
#endif
		while (a > 0) printf("~-"), a--;
		while (a < 0) printf("-~"), a++;
#if PAD
		for (; j < n * 2; j++)
			putchar("~-"[((n^j)&1)^(j<n)]);
#endif
		printf("'%c',\n", s1[i]);
	}
}

#endif
