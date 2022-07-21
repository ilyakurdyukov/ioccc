### Unusual CRC32

A very unusual CRC32 function (the most common [variant](https://reveng.sourceforge.io/crc-catalogue/17plus.htm#crc.cat.crc-32-iso-hdlc) used in PKZIP), it does not use tables and reads data in 32-bit aligned chunks (it can handle unaligned pointer and size not multiple of 4) and also processes 32 bits at a time.

Also the code is self-describing, see those big CRC letters? But maybe I misunderstand this term.

