int itc_min_num(long long number)
{
	int min = 2147483647;
	while (number != 0)
	{
		if (min > number % 10)
			min = number % 10;
		number /= 10;
	}
	return min;
}