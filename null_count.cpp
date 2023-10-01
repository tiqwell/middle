int itc_null_count(long long number)
{
	int count = 0;
	if (number == 0)
		return 1;
	while (number)
	{
		if (number % 10 == 0)
			count ++;
		number /= 10;
	}
	return count;
}
