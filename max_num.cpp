
int itc_max_num(long long number)
{
	int max = 0;
	if (number < 0)
		number *= -1;
	while (number)
	{
		if (max < number % 10)
			max = number % 10;
		number /= 10;
	}
	return max;
}
