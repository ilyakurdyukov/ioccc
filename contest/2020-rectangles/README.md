### Usage

This program divides the image into a specified number of rectangles. This process is content aware, so algorithm tries to match most of the information. However, it doesn't finds the best theoretically possible layout.

    ./prog 1000 input.jpg output.jpg

### Building

You can build three versions, depending on the image format.

Default is JPEG version, if you have the *libjpeg* development package installed in your system, then `make` without arguments should do the thing.

If you want to use *libjpeg* compiled from sources, then use `LIBS` define to specify the path to includes and the library.

    make prog LIBJPEG="-Ijpeg-6b jpeg-6b/libjpeg.a"

Use this command to build a PNG version (you need *libpng*):

    make prog_png LIBPNG="-lpng"

And the PPM version (no additional dependencies, can read raw/ASCII PPM, writes raw PPM):

    make prog_ppm

### Building on OSX

- Thanks to Cody Ferguson for this information!

First, make sure you have the compiler tools installed e.g. by:

    $ sudo xcode-select --install

Make sure you install [MacPorts](https://www.macports.org/install.php). Then do:

    $ sudo port install jpeg libpng ImageMagick

The program itself doesn't need ImageMagick, install it only if you plan to make gifs from the results using "makegif.sh".

After that’s installed you need to run make with these options:

    $ make LIBS="-I/opt/local/include -L/opt/local/lib"

### Notes

Made this thing while experimenting with the idea of representing an image with rectangles (lossy compression). It's not very good in that sense, but the results look funny, like a kind of cubism pixelart.

Do not use values above 50000, it gonna be slow.

To understand how this works, just try running with 1,2,3,4... number of rectangles. At each iteration, the rectangle with the biggest difference from the picture data is split (halves may have different size) horizontally or vertically to get the minimum difference.

You can use this command to make a gif from output images (uses ImageMagick):  
`convert -delay 10 -dither none -loop 0 $(ls out*.png | sort -V) $(ls out*.png | sort -rV) +map out.gif`  
Also provided `makegif.sh` to aid with gif creation.

