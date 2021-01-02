### Cody Boone Ferguson vs. Ilya Kurdyukov in
## The Game of Snakes

This is a rewritten [IOCCC 2020 winning entry](https://www.ioccc.org/2020/ferguson1/) by [Cody Boone Ferguson](https://ioccc.xexyl.net).  
I implemented/changed some of the features I wanted.

### Changes

* square tiles with [fullwidth](https://en.wikipedia.org/wiki/Halfwidth_and_fullwidth_forms) unicode characters
* uses [console sequences](https://en.wikipedia.org/wiki/ANSI_escape_code), no *libcurses* required
* disallowed turning in the opposite direction
* the segments spawn as in classic games
* the ESC key can be used to exit
* winning message letters are printed in random colours
* original option names changed:
    - MAXSIZE -> GOAL
    - WALLS -> WRAP
    - CANNIBAL -> NOCLIP
    - EVADE -> EXPIRY
* options are read from the command line: './prog WAIT=100'
* new option SAVER: if you encounter an obstacle this option gives you a delay to change direction before losing
* new option FOODS: specifies the number of food items in the game area (max 20)
* expiry time of food items is selected randomly in the range from EXPIRY/2 to EXPIRY
* default options:
    - SIZE=5 GROW=5 GOAL=200
    - SHED=20 SHEDS=-1 FOODS=3 EXPIRY=200
    - WAIT=200 WRAP=1 NOCLIP=0 SAVER=2

### Notes

* You can back to the old display method (using *libcurses*) with the `CURSES` define.
* Use the `CUSTOM` define to include `custom.h` header file with game objects replaced with unicode emojis.
* You can switch to reading options from environment variables by defining `GETENV`.
* See the original work on the IOCCC website for instructions.

**Thanks to Cody Boone Ferguson for the base version of this game, as well as for testing the unicode version and helping with macOS compatibility!**

### Issues

* In Ubuntu: Minor graphical glitches when using the default terminal font "Ubuntu Mono Regular", works fine with "Monospace Regular".
* In macOS: Missing arrow symbols, use `CUSTOM` mode with emojis instead.


