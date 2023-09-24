double itc_pow(int num, int step)
{
	double r = num;
	if (step < 0)
	{
		step *= -1;
		for (int i = 1; i < step; i++)
		{
			r *= num;
		}
		r = 1 / r;
	}
	else if (step == 0)
		r = 1;
	else
	{
		for (int i = 1; i < step; i++)
		{
			r *= num;
		}
	}
	return r;
}