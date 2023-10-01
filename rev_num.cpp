#include "middle.h"
int itc_rev_num(long long number) {
	long long a = 0;
	if (number < 0) 
		number *= -1; 
	while (number) 
	{
		int i = number % 10;
		a = a * 10 + (i * 10);
		number /= 10;
	}
	a /= 10;
	return itc_len_num(a);

}
