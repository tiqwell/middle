long long itc_multi_num(long long number)
{
	long long mult = 1;
	if (number < 0)
		number *= -1;
	if (number == 0)
		return 0;
	while (number != 0)
	{
		mult *= number % 10;
		number /= 10;
	}
	return mult;
}