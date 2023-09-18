int itc_len_num(long long number)
{
	int lenOfRaz = 1;
	while(number = number  / 10)
	{
		lenOfRaz++;
	}
	return lenOfRaz;
}
