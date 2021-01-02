#include <stdio.h>
#ifndef IDX
#define IDX 1
#endif
#if IDX==1

                      P,o,S,i,t,I,v,E;
                 main(){v?(o+=o)?i+=i,i++:(
              o+=t,S?E?              P?i+=v:(o
           +=i,o+=                        o,o+=o)
         ,o++:(                              (I?P?o
        +=i:o                                  ,o+=o
      ,o+=t                                      ,o+=o
     ,o+=o                                        :(o+=
    o,o+=        t,P?++              o,o+=o        ,o++,
   o+=o:        (o+=o,++            o,o+=o,o        ++)))
   ):(E         ?(I?P?++            o,o+=o,o         ++,o
  +=o,o          ++,o+=              o,o++,          S++:(
  o+=i                                                ,o+=
  o,(o                                                +=o)
  ):(o                                                +=o,
  P?(o                                                +=o,
  o+=t,                                              o+=i)
   :((o          +=t,                  o+=o          ,o++
   ,o+=o          ),o++              ))):(          I?o+=
    o,o+=           t,(o+=        o,o+=o           ):(P?
     o+=i,            o+=o,o+=t,o+=o,o            +=o,o
      ++:(o               +=o,o+=o               ,o+=o
        )))),                                  P+=(P
         )?I+=(                              I?E+=E
           ?i:v,i:                        v),i:v,
              putchar(o              )):(t++,v
                 +=++o,t+=t,t+=t,t+=t,t++,i
                      ++),i?main():o;}

#elif IDX==2 // square

  P,o,S,i,t,I,v,E;main(){(v?(o+=
  o)?o:(o+=t,S?E?P?v+=i,o++:(o+=
  i,o+=o,o+=o,o++):(I?P?o+=i:o,o
  +=o,o+=t,o+=o,o+=o:(o+=o,o+=t,
  P?o++,o+=o,o++,o+=o:(o+=o,o++,
  o+=o,o++))):(E?I?P?o++,o+=o,++
  o,o+=o,o++,o+=o,o++,S++:(o+=i,
  o+=o,o+=o):(o+=o,P?o+=o,o+=t,o
  +=i:(o+=t,o+=o,o++,o+=o,o++)):
  (I?o+=o,o+=t,o+=o,o+=o:(P?o+=i
  ,o+=o,o+=t,o+=o,o+=o,o++:(o+=o
  ,o+=o,o+=o)))),P+=P?I+=I?E+=E?
  i:v,i:v,i:v,putchar(o),v):(i?i
  +=i:o++,o+=o?o:(v++,t++,t+=t,t
  +=t,t+=t,++t),++i))?main():o;}

#endif
