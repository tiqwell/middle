bool itc_mirror_num(long long number) 
{
	long long num = number;
	long long num1 = number;
	long long mirror = 0;
	int y = 0;
	int z = 1;
	while (num != 0)
	{
		y++;
		num /= 10;
	}
	for (int i = 0; i < y; i++) 
		z *= 10;
	while (number)
	{
		int a = number % 10;
		mirror += z * a;
		z /= 10;
		number /= 10;
	}
	mirror /= 10;
	if (num1 == mirror)
		return 1;
	return 0;
}
