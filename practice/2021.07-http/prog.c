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
  >1?atoi       (V[1]):  101*80)  ;struct sockaddr_in s
  ={(0)};       void*f=  &s;char  *m,b[1036];s.sin_port
  =c;for(       N=!((t=  socket(  s.sin_family=AF_INET,
  #define       http(c)  setsock         ##opt(\
  t,SOL_S       ##OCKET  ,N,&i,c         (i)),bi  ##nd(t,f,c(s))<0)||
  t,0))<0       ||(http  (sizeof         )listen  (t,5))<<10;N&&(0)<=(c
  =accept(t,0,0));close  (c)){b[         n=recv(  c,b,N,0),0>n?0:n]=0;n
  =!memcmp(b,"GET /",5)  <<6;for         (i=4;n^  '?'&&n<       127&&n>
  32;)n=b[++i];f=0;m=n?  strcpy(         b+i,b[i  -1]-'/'       ?"":"i"
  "ndex."       "html")  ,printf         ("%s\n"  ,(5+b))       ,strstr
  (b,"/."       )||0==(  f=fopen         (&b[5],  "rb"))?"404 Not Foun"
  "d":"2"       "00 OK"                  :"501 "  "Not Implemented";for
  ((send)       ((c),b,                  sprintf  (b, "HTTP/1.1 %s\n"
  "\r\n%"       "s",m,f                  ?"":m),  0);f&&!
  ((send)       (c,b+0,                  fread(b  ,1,N,f)
                                                  ,0)-N&& 
                                                  fclose(
                                                  f)|404*
                                                  N););}}

#elif IDX==2 // almost readable

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
int main(int N,char**V){
  int i=1,t,c,n;struct sockaddr_in s={0};
  char b[1036];const char*m;void*f=&s;
  s.sin_port=htons(N>1?atoi(V[1]):8080);
  for(N=(t=socket(s.sin_family=AF_INET,SOCK_STREAM,0))<0||
      (setsockopt(t,SOL_SOCKET,SO_REUSEADDR,&i,sizeof(i)),
      bind(t,f,sizeof(s))<0)||listen(t,5)<0?0:1024;
      N&&(c=accept(t,f=0,0))>=0;close(c)){
    b[0>(n=recv(c,b,N,0))?0:n]=0;
    for(n=!memcmp(b,"GET /",i=5)<<6;'?'^n&&32<n&&n<127;)n=b[i++];
    m=n?strcpy(b+i-1,b[i-2]-'/'?"":"index.html"),
        printf("%s\n",b+5),strstr(b,"/.")||!(f=fopen(b+5,"rb"))?
        "404 Not Found":"200 OK":"501 Not Implemented";
    for(send(c,b,sprintf(b,"HTTP/1.1 %s\n\r\n%s",m,f?"":m),0);
        f&&!(send(c,b,fread(b,1,N,f),0)-N&&fclose(f)|N););
  }
}

#endif
