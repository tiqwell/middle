#include "middle.h"
int itc_rev_num(long long num) {
	int sum = 0;
	if (num < 0)
		num *= -1;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}