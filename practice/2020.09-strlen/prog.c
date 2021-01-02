
#if 1

	size_t strlen(const
	char*s){int n=0,x,c
	;for(;3&(size_t)s;n
	+=1)if(!*s++)return
	n;;for(c=~0u/255;x=
	*(int*)s,!(x=(x-c)&
	~x&c<<7);s+=4)n+=4;
	return n+=3&4627>>(
	x*4227328>>28&15);}

#else

	size_t strlen(const char
	*s){union{int i;char c;}
	u={1};size_t n=0,x,c=~n/
	255,l=sizeof(l),m=u.c?~n
	/511*2:(~n>>l)/16256;for
	(;(size_t)s%l;n++)if(!*s
	++)return n;;for(;!(x=*(
	size_t*)s,x=(x-c)&~x&c<<
	7);s+=l)n+=l;x=m*x>>l*7;
	return n+=l-8||x<16?l-4+
	(91>>x&3):91>>x/32*2&3;}

#endif
