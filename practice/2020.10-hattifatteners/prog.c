#  include                                                        <stdlib.h>
# include                                                          <stdio.h>
#include                                                            <math.h>
#include                                                            <time.h>




                                    /*moomin*/
                                 #define F printf
                              #define  R (z = rand\
                            ()+!10,     z/RAND_MAX)
                           # define    E(a) P("M",-\
                          r-w/a,-h+w/2)A(2    )A(-2)
                          # define P( a,b     , d) \
                        F(a "%.2f %.2f",x0   +(b)*\
                        c-(d)*s, y0+ (b)* s+(d)*c);
                       #define A(a) F( "a%.2f %."\
                      "2f 0 1 0 %.2f 0",r,r,r*a);
                      int main(int i,char**v){int       W=800
           ,H        =600,f=0x272222,j,n=i>1?atoi     (v[1
          ]):50      ;double d=acos(0)/90,g=7.5,a   ,D,S
             ,C,w   =25,h,e,b,k,l,m,o,p,r,X,Y,z,  s,c,      x0,y1
      =0,     y0;F("<svg width='%i' height='%i' xmlns='http://"
      "www."     "w3.org/2000/svg'><style>path{fill:#%x;str"
          "oke:white;stroke-width:1.5;}</style><rec"
                "t width='100%%' height='100%%' fill='#%x'/>",
      W,H,f,f);for(srand(i>2?atoi(v[2]):time(0)),i=0;i      ++<n;)
    {a=(       R-0.5)*20*d;r=i+n;r/=n*2;S=H;s=sin(a)*r,c=
            cos(  a)*r;r*=5;x0=R*W;h=100+R*50;y1+=S    /n;y0=
           y1-   h;k  =(b=R*15+10)*1.5;F("<path d='")      ;P("M"
         ,-w   ,h)     j=R*2+4;e=w/tan(a=(90-j*g)  *d);X
              =-w      ;D=sqrt(w*w+e*e);Y=e;P("L",    X,Y)for
                        (z=1,f=-j;f++<j;){a+=z*g*d;       S=sin
                         (a);C=cos(a);l=z*S*b;m=C*b;
                         o=z*S*k;p=C*k;P("L",X-l,Y+m
                          )P("C",X-o,Y+p) a+=z*g*d;S=
                          sin(a);C=cos(a);X=-S*z*D;Y=
                          C*D;P(",",X-o,Y+p)P(",",X-l
                          ,Y+m)P("L",X,Y)if(!f){P("L"
                         ,-w,w-h)P("C",-w,-h-w)P(","
                         ,w,-h-w)P(",",w,w-h)Y=-e;X=
                        w;P("L",X,Y)z=-1;}}P("L",w,
                        h)x0+=(R-0.5)*r*3;F("'/><p"
                       "ath" " d='"  );E(3) E(- 3)
                        F(    "'/>"   );}F(  "</sv"
                        "g"    ">"      );       }


