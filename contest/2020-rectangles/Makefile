
LIBS ?=
LIBJPEG ?= -ljpeg
LIBPNG ?= -lpng
MFLAGS ?= -march=native
CFLAGS ?= -Wall -Wextra -pedantic -O3 $(MFLAGS)

.PHONY: clean all

all: prog prog_png prog_ppm

clean:
	rm -f prog prog_png prog_ppm

prog: prog.c
	$(CC) $(CFLAGS) -s -o $@ $< $(LIBS) $(LIBJPEG)

prog_png: prog.png.c
	$(CC) $(CFLAGS) -s -o $@ $< $(LIBS) $(LIBPNG)

prog_ppm: prog.ppm.c
	$(CC) $(CFLAGS) -s -o $@ $< $(LIBS)

