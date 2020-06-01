#include<stdio.h>


unsigned long lzeros(unsigned long x)
{
	int s_of_long = sizeof(unsigned long);
    int num = 32, y = 0;
	if (s_of_long == 8) {
		num +=num;
	    y = x > 32;
		if (y) {
			num -= 32;
		    x >>= 32;
		}
	}

	y = x >> 16;
	if (y) {
		num -= 16;
        x >>= 16;
	}
	y = x >> 8;
	if (y) {
		num -= 8;
		x >>= 8;
	}

	y = x >> 4;
	if (y) {
        num -= 4;
		x >>= 4;
	}

	y = x >> 2;
	if (y) {
		num -= 2;
		x >>=2;
	}
	y = x >> 1;
	if (y)
		return num -= 2;
	return num - x;
}



int main()
{

	unsigned long  x = 0x1;
	printf(" Leading zeroes %ld \n",lzeros(x));
	return 0;
}
