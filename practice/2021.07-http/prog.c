#ifndef IDX
#define IDX 1
#endif
#if IDX==1 // final

      #include/*           micro HTTP server           */<stdio.h>
     #include/*           usage: ./http [port]          */<stdlib.h>
    #include/*                                           */<string.h>
     #include/*   the default port is 8080, files are   */<unistd.h>
      #include/*    read from the current directory    */<netdb.h>


                  int main(int n,char**
                  V){int t=SOCK_STREAM,
                  N=SO_REUSEADDR,i=1,c=
                         htons(n
  >1?atoi       (V[1]):  404*20)  ;struct sockaddr_in s
  ={000};       void*f=  &s;char  *m,b[1036];s.sin_port
  =c;for(       N=!((t=  socket(  s.sin_family=AF_INET,
  #define       http(c)  setsock         ##opt(\
  t,SOL_S       ##OCKET  ,N,&i,c         (i)),bi  ##nd(t,f,c(s))<0)||
  t,0))<0       ||(http  (sizeof         )listen  (t,5))<<10;N&&(0)<=(c
  =accept(t,0,0));close  (c)){b[         n=recv(  c,b,N,0),0>n?0:n]=0;n
  =!memcmp(b,"GET /",5)  <<6;for         (i=4;n^  '?'&&n<       127&&n>
  32;){n=b[++i];}strcpy  (b+i,b[         f=0,i-1  ]=='/'?       "index"
  ".html"       :"");m=  n?puts(         b+5),b[  03]='.'       ,strstr
  (b,"/."       )||0==(  f=fopen         (&b[3],  "rb"))?"404 Not Foun"
  "d":"2"       "00 OK"                  :"501 "  "Not Implemented";for
  ((send)       ((c),b,                  sprintf  (b,"HTTP/1.1 %s\r\n"
  "\r\n%"       "s",m,f                  ?"":m),  0);f&&!
  ((send)       (c,b+0,                  fread(b  ,1,N,f)
                                                  ,0)-N&& 
                                                  (fclose
                                                  (f),404
                                                  )););}}

#elif IDX==2 // almost readable

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32 /* needs linking with Ws2_32 */
#include <winsock2.h>
#define close closesocket
#define strstr(a,b)strstr(a,b)||strchr(a,':')||strchr(a,'\\')
#define struct WSADATA w={0};WSAStartup(514,&w);struct
#else
#include <unistd.h>
#include <netdb.h>
#endif
int main(int N,char**V){
	int i=1,t,c,n;struct sockaddr_in s={0};
	char b[1036];const char*m;void*f;
	s.sin_port=htons(N>1?atoi(V[1]):8080);
	for(N=(t=socket(s.sin_family=AF_INET,SOCK_STREAM,0))<0||
			(setsockopt(t,SOL_SOCKET,SO_REUSEADDR,f=&i,sizeof(i)),
			bind(t,f=&s,sizeof(s)))||listen(t,5)?0:1024;
			N&&(c=accept(t,f=0,0))>=0;close(c)){
		b[0>(n=recv(c,b,N,0))?0:n]=0;
		for(n=!memcmp(b,"GET /",i=5)<<6;'?'^n&&32<n&&n<127;)n=b[i++];
		m=n?strcpy(b+i-1,b[i-2]-'/'?"":"index.html"),
				puts(b+5),b[3]='.',strstr(b,"/.")||!(f=fopen(b+3,"rb"))?
				"404 Not Found":"200 OK":"501 Not Implemented";
		for(send(c,b,sprintf(b,"HTTP/1.1 %s\r\n\r\n%s",m,f?"":m),0);
				f&&!(send(c,b,fread(b,1,N,f),0)-N&&fclose(f)|N););
	}
}

#endif
