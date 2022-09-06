#if !defined(__i386__) && !defined(__x86_64__)
#error not that handy
#endif

#include <signal.h>

const __attribute__((section(".text.")))

double handy[] = {
	5.633774969832335e+113,
	7.780341692776989e+179,
	1.671822431809381e+243,
	-1.491038747146387e-263,
	2.553802998393361e-18,
	7.376159831052791e-293,
	-8.535982423343966e-305
};

int main() {
	*(double*)handy *= (long) //* distraction *//;
	signal(SIGSEGV, (void*)handy);
}
