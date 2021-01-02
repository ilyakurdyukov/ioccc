### atoi

An obfuscated implementation of the `atoi` function from libc.

Test run in bash:

    $ ./prog "$(printf '\t\n\r -0123')" " +123-9" "-9999999999"
    -123
    123
    -1410065407

