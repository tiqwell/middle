int itc_min_num(long long number)
{
	int min = 2147483647;
	if (number == 0)
		return 0;
	if (number < 0)
		number *= -1;
	while (number)
	{
		if (min > number % 10)
			min = number % 10;
		number /= 10;
	}
	return min;
}
