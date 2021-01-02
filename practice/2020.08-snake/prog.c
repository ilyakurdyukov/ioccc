#define _GNU_SOURCE
#include <time.h>
#include <stdlib.h>
// custom tiles
//#define CUSTOM
// old display method
//#define CURSES
// environment options
//#define GETENV
#define XM 2 /* X coord multiplier */
// colours for drawing here (text, wall, head, body, food)
#define UNI_CLR "76127"
#define UNI_OBJ(c) 3,&"\uff0b\u3000\u2b9d\u2b9f\u2b9c\u2b9e\uff2f\uff0a"[c*3]
#ifdef CUSTOM
#include "custom.h"
#endif
#ifdef CURSES
#include <curses.h>
#define C(a,n)attro##n(COLOR_PAIR(a))
#define q(a,b,c)mvaddch((a)+2,(b)*XM+1,"+ ^v<>o*"[c])
#else
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#define C(a,n)printf("\33[9%cm",UNI_CLR[a])
#define q(a,b,c)printf("\33[%d;%dH%.*s",(a)+3,(b)*2+2,UNI_OBJ(c))
#endif
#define J(x)"X:%d/%d Y:%d/%d S:%u/%u B:%u" x,Y,H,X,W,Z,M,N
#ifdef GETENV
int main()
#define E(a,b)b=(r=getenv(#a))?atoi(r):b;
#else
#include <string.h>
int main(int C,char**V)
#define E(a,b)for(I=0;++I<C;b=strstr(r,\
	#a "=")-r?b:atoi(strchr(r,'=')+1))r=V[I];
#endif
	{const char*r;int*e=0,*n,*A,x,y,z,X,Y,W,H,I,
	SA=5,GR=5,M=200,S=20,S2=-1,BN=3,EV=200,T=200,WL=1,G=0,LS=2,
	P=0,Q=2,Z=0,N=0,S1=0,l=0,D=0,B1=0,B[40],L1=0;
#ifdef CURSES
	int L[]={WALL,WB,HEAD,HB,BODY,BS,BG,BB};
	r="curses error";if(initscr()){
	getmaxyx(stdscr,W,H);H=(H-2)/XM;W-=3;
#else
	struct winsize ws;struct termios a,L;char k;
  {tcgetattr(0,&L);a=L;a.c_lflag&=~ICANON&~ECHO;
	a.c_cc[VMIN]=a.c_cc[VTIME]=0;tcsetattr(0,TCSANOW,&a);
	ioctl(0,TIOCGWINSZ,&ws);H=ws.ws_col/2-1;W=ws.ws_row-3;
#endif
	r="screen too small";if(H>7&&W>7){
		E(SIZE,SA)E(GROW,GR)E(GOAL,M)E(SHED,S)E(SHEDS,S2)E(FOODS,BN)
		E(EXPIRY,EV)E(WAIT,T)E(WRAP,WL)E(NOCLIP,G)E(LIFESAVER,LS)
		T=T>9?T:9;l=W*H;M=M>1?M:1;
		e=calloc(M*2+l,sizeof(x));
		r="memory error";if(e){
			srand(time(0));
#ifdef CURSES
			attron(A_BOLD);curs_set(0);nonl();intrflush(stdscr,0);
			keypad(stdscr,1);noecho();cbreak();start_color();
			for(Q=x=I=0;++x<5;)init_pair(x,L[x*2-2],L[x*2-1]);
			for(C(1,n);I<2;mvvline(1,I++?H*XM+1:0,'#',W+2))
				mvhline(I?W+2:1,0,'#',H*XM+1);
#else
			printf("\33[1m\33[40m\33[?25l");C(1,n);
			for(Q=Y=0,I=H;Y<W+2;I=++Y>W?H:0)
			for(printf("\33[%dH",Y+2),x=0;x<I+H+2;
				printf(y?"\342\225%c":"\u3000",143+y),x++)
				y=!x||x>I+H?I?14-!x*3-!Y*6:2:I?1:0;
#endif
			Y=H/2;X=W/2;r=0;}}
	for(A=(n=e+M)+M;!r&&!Q;){
		if(!P&&!L1){
			x=SA--<0;SA+=x+=SA<0;Z-=x=x<Z?x:Z;l+=x-!A[Y*W+X]++;
			for(I=0;I<x;I++)--A[e[I]*W+n[I]]?l--:q(n[I],e[I],1);
			for(I=0;x&&I<Z;I++)n[I]=n[I+x],e[I]=e[I+x];
			C(2,n);q(X,Y,D);e[Z]=Y;n[Z++]=X;}
		if(B1<BN*2&&B1<40&&l){
			for(x=rand()%l+1,I=0;x-=!A[I];I++);
			C(4,n);q(x=I%W,y=I/W,7);
			l+=--A[I];B[B1++]=I;B[B1++]=EV?(rand()%EV+EV)/2:EV;}
#ifdef CURSES
		C(4,ff);mvprintw(0,0,J("\n"));refresh();timeout(T);
		for(I=0;!I&&(x=getch())>0;Q|=(x|32)=='q'||x==27,
			I=x-KEY_UP?x-KEY_DOWN?x-KEY_LEFT?x-KEY_RIGHT?0:5:4:3:2)P^=x==32;
		getmaxyx(stdscr,x,y);y=y<XM*H+2||x<W+3;
#else
		C(0,n);printf("\33[H" J("\33[K\n"));
		for(y=I=0;!I&&(read(0,&k,1)<1?usleep(1000),k=++y<T:1);
			Q|=(k|32)=='q',I=k==27&&(Q|=read(0,&k,1)<1,k)==91?
			read(0,&k,1)&&(k-=65)>>2?I:(k^k/2)+2:I)P^=k==32;
		ioctl(0,TIOCGWINSZ,&ws);y=ws.ws_col<2*H+2||ws.ws_row<W+3;
#endif
		z=D;I?P=0,D^I^1?D=I:0:0;
		if(!D+P<=y*2){
			I=Y;x=X;*(D>3?&Y:&X)+=D%2*2-1;
			Y=WL?X=(X+W)%W,(Y+H)%H:Y;
			r=(X|Y)<0||Y>=H||X>=W||y?"OUCH!":!G&&A[Y*W+X]>0?"OW!":r;
			L1=r&&L1<LS?Y=I,X=x,D=z,r=0,L1+1:(C(3,n),q(x,I,6),0);
			for(z=I=0;I<B1;l-=y?0:A[y*W+x]++)x=B[I++],y=B[I++],
				Y*W+X-x?--y?B[z++]=x,B[z++]=y:q(x%W,x/W,1):(SA+=GR,N++,y=0);
			B1=z;SA+=!S||++S1%S?0:S2;}
		r=Z-M?r:"YOU WIN!";}
#ifdef CURSES
	endwin();
#else
	tcsetattr(0,TCSANOW,&L);
	printf("\33[m\33[2J\33[?25h\33[H");
	for(;Z==M&&*r;)printf("\33[9%dm%c\33[m",rand()%6+1,*r++);
#endif
	}r?puts(r):0;Q<2?printf(J("\n")):0;
	return Q>1;}

