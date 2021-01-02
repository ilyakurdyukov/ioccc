### R is for rot13

Slightly improved one-liner from [Dave Burton](https://twitter.com/lv2jmp/status/1343654203131092992).

#### Special

And a longer but interesting version I made:

```c
main(c){for(;~(c=getchar());)putchar(c+45-"----- :"[(c&-33)/13%15%10%7]);}
```

