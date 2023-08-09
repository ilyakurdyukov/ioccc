// note: -Wno-implicit option is required to compile with Clang

#ifndef IDX
#define IDX 109
#endif
#if IDX==109
// Exercise 1-9: Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.

// 59 bytes (ASCII, does the same for zeros)
x;main(c){for(;c>=0;c-x|x&~32&&putchar(x))x=c,c=getchar();}

#elif IDX==110
// Exercise 1-10: Write a program to copy its input to its output, replacing each
// tab by \t, each backspace by \b, and each backslash by \\.

// 91 bytes (also a zero is preceded by a backslash)
main(c){char*p;for(;p=strchr("\t\b\\\0tb\\",c=getchar()),c>=0;printf("\\%c"+!p,p?4[p]:c));}

// 85 bytes (EOF = -1, little endian, unaligned read, sizeof(int) == 4)
//*p;main(c){for(;p=strchr("\t\b\\\0tb\\",c=getchar()),~c;printf("\\%c"+!p,p?p[1]:c));}

#elif IDX==112
// Exercise 1-12: Write a program that prints its input one word per line.

// 79 bytes (ASCII, zero is also considered a whitespace)
x;main(c){for(;x+=x+!strchr(" \t\n",c=getchar()),c>=0;x&3&&putchar(x&1?c:10));}

#elif IDX==113
// Exercise 1-13: Write a program to print a histogram of
// the lengths of words in its input.

// 167 bytes (ASCII, zero is also considered a whitespace)
l,h[99],d;main(c){for(;c>=0;)l+=strchr(" \t\n",c=getchar())||c<0?d=d>++h[l]?d:h[l],-l:l<99;
for(;c<0?++l<99?h[l]?c=h[l]*75/d,printf("%3d ",l):1:0:putchar(c--?61:10););}

#elif IDX==114
// Exercise 1-14: Write a program to print a histogram of
// the frequencies of different characters in its input.

// 146 bytes (ASCII)
l=32,h[127],d;main(c){for(;c=getchar(),c>=0;)d=c>126||d>++h[c]?d:h[c];
for(;c<0?++l<127?h[l]?c=h[l]*77/d,printf("%c ",l):1:0:putchar(c--?61:10););}

#elif IDX==117
// Exercise 1-17: Write a program to print all input lines that are longer than 80 characters.

// 92 bytes (ASCII)
char b[81];n;main(c){for(;c=getchar(),c>=0;n*=c!=10)n<80?b[n++]=c:(*b=!printf("%s%c",b,c));}

#elif IDX==118
// Exercise 1-18: Write a program to remove trailing blanks and tabs
// from each line of input, and to delete entirely blank lines.

// 126 bytes (ASCII)
char b[999];n,x;main(c){for(;c=getchar(),c>=0;x*=c!=10)
c-32&&c-9?n=x++|c-10&&!printf("%.*s%c",c-10?n:0,b,c):n<999?b[n++]=c:0;}

#elif IDX==119
// Exercise 1-19: Write a function reverse(s) that reverses the character string s.
// Use it to write a program that reverses its input a line at a time.

// 67+100 bytes (ASCII)
reverse(char*s){char*e=s+strlen(s),t;for(;--e>s;*e=t)t=*s,*s++=*e;}
char b[999];n;main(c){for(;c>=0;c<0|c==10?n=b[n]=0,reverse(b),puts(b):n<998?b[n++]=c:0)c=getchar();}

#elif IDX==123
// Exercise 1-23: Write a program to remove all comments from a C program.
// Don't forget to handle quoted strings and character constants properly.
// C comments do not nest.

// 172 bytes (ASCII, replaces comments with spaces)
m,p=-1;main(c){for(;c>=0;p=c)c=getchar()|(p==92)<<8,m=m|p-47||p-c&&c-42?c-34&&c-39||m%c?m:m^c:c,
p>=0&&putchar(m>39&&4<p%256u-9?32:p),m=42-m|p-m|c-47?m-47|c-10?m:0:!(c=32);}

#endif

