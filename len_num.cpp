int itc_len_num(long long number)
{
	int lenOfRaz = 1;
	while(number)
	{
		lenOfRaz++;
		number  = number / 10;
	}
	return lenOfRaz;
}
