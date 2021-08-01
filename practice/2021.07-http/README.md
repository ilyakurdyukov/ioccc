### Micro HTTP server

A minimal HTTP server implementation that doesn't even set the Content-Type and Content-Length fields in the response. Only GET request is supported.

Reads one command line argument, which is the port number, defaults to 8080 if not specified. Files are read from the current directory. It also keeps a log of files accessed from the server. If the filename is omitted in the GET request, then "index.html" is used.

There is no exit from the program, you need to use Ctrl+C or the "kill" command. 

#### Example

	echo "Hello, World!" > hello.txt
	./http 8080 &
	pid=$!
	sleep 0.1
	wget -q -O - http://localhost:8080/hello.txt
	kill $pid

This should print "hello.txt" - which is printed by the server, and then "Hello, World!" is the result of wget reading a file from the server. 

#### Updates

- Fixed the "//" vulnerability, that was pointed out at HN (thanks to [NieDżejkob](https://github.com/NieDzejkob) for noticing the shortcut, so I have space to fix it).
- Fixed CRLFs ("\n\r\n" -> "\r\n\r\n") required by the standard, however it seems that modern browsers simply ignore CR.
- Fixed compiler warnings for GCC and Clang when using "-Wall -Wextra -pedantic" (I don't care about Clang's "-Weverything").
- The "almost readable" version can now work on Windows (but this has only been tested using Msys2). You can also replace the include lines in the ASCII-art version (compiles with warnings).

