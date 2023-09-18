#include "middle.h"
int itc_mirror_count(long long number)
{
	int count = 0;
	for(int i = 0; i <= number; i++)
	{
		if (itc_mirror_num(i))
			count++;
	}
	return count;
}