### strlen

This is an obfuscated strlen function that aligns a pointer and then uses a fast scan for null bytes, reading 4 bytes in a row. The first will only work on little endian machines. The second should work regardless of endianess and also read data in chunks of a CPU's word size.
