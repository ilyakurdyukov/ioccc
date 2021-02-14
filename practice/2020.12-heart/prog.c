#ifndef IDX
#define IDX 1
#endif
#if IDX==1 // (x^2+y^2-N^2)^3-x^2*y^3*N<0

   x,y,z;  main()
 {for(y=15;--y>-11;
 )for(x=25;--x>-25;
  putchar(x+24?z*z
  *z<x*x*y*y*y*200
   ?42:32:10))z=x
     *x-400+y*y
        *4;}

#elif IDX==2

   x,y=28  ;main(
 z){for(;y>-22;y-=2
 )for(x=25;--x>-25;
  putchar(x+24?z*z
  *z<x*x*y*y*y*25?
    42:32:10))z=
     -400+x*x+y
        *y;}

#elif IDX==3 // min(abs(x)+abs(y)-N,x*x+y*y-(abs(x)+y)*N)<0

    x,y,z;   main()
  {for(y=21;-21<y;y-=
  2)for(x=21;-21<--x;
  )z=x<0?-x:x,putchar
   (x+20?(y<0?z-y<16
    :z*z+y*y<(z+y)*
      16)*10-224:
         10);}

#elif IDX==4

    x,y=21  ;main(
  z){for(;y>-21;y-=2
 )for(x=21;x-->-20;)z
 =x<0?-x:x,putchar(x+
  20?(y<0?z-y<16:z*z
    +y*y<(z+y)*16)
      *10+32:10)
          ;}

#endif

