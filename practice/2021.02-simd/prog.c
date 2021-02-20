#ifndef IDX
#if defined(__ARM_NEON__) || defined(__aarch64__)
#define IDX 3
#else
#define IDX 1
#endif
#endif
#if IDX==1 // x86 MMX

#include <mmintrin.h>
int main(int c,char**
v){__m64 a=_mm_set_p\
i8(1,2,4,8,16,32,64,~
127),x[2]={_mm_sub_p\
i8(_mm_set1_pi8('0'),
_mm_cmpeq_pi8(a,_mm_\
and_si64(a,_mm_set1_\
pi8(c>1?atoi(v[1]):0)
)))};puts((char*)x);}

#elif IDX==2

#include <mmintrin.h>
int main(int c,char**
#define m(m) _mm_##m(
v){__m64 a=m(set_pi32
)~0u/254,~0u/127*8),x
[2]={m(sub_pi8)m(set\
1_pi8)48),m(cmpeq_pi\
8)a,m(and_si64)m(set\
1_pi8)atoi(v[c-1])),a
)))};puts((char*)x);}

#elif IDX==3 // ARM NEON

#include <arm_neon.h>
int main(int c,char**
#define a(b,c,d)v##c\
##_s8(vdup_n_s8(d),b)
v){int8x8_t x[2]={a(a
(a(vcreate_s8(~(~0ull
/65025)>>8),shl,atoi(
v[c-1])),orr,-2),and,
49)};puts((char*)x);}

#endif
