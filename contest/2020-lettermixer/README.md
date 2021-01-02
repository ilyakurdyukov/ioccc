### Letter Mixer ###

Compile using `cc prog.c -o prog` and try this:

`cat input.txt | ./prog`

The program can work with letters that are not represented in English, as long as these letters are encoded in the higher part of the single-byte character set (use `iconv` to convert from UTF-8 and back).
