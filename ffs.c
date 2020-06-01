#include <stdio.h>




unsigned long ffs1(unsigned long x)
{
	int s_of_long = sizeof(unsigned long);
	int n = 0;
	if (s_of_long == 8) {
		if (!(x & 0xFFFFFFFF)) {
			n += 32;
		    x >>= 32;
		}
	}
	if (!(x & 0xFFFF)) {
		n += 16;
		x >>= 16;
	}
	if (!(x & 0xFF)) {
		n += 8;
		x >>= 8;
	}
	if (!(x & 0xF)) {
		n += 4;
		x >>= 4;
	}
	if (!(x & 0x3)) {
		n += 2;
		x >>= 2;
	}
	if (!(x&0x1)) {
		n += 1;
	}
	return n;
}



int main()
{
	unsigned long x = 0x80000000;

	printf("1st bit set is %ld\n", ffs1(x));
	return 0;
}

