
int itc_max_num(long long number)
{
	int max = 0;
	while (number != 0)
	{
		if (max < number % 10)
			max = number % 10;
		number /= 10;
	}
	return max;
}