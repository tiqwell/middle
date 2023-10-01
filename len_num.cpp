int itc_len_num(long long number)
{
	int lenOfRaz = 1;
	while(number)
	{
		lenOfRaz++;
		number  =/ 10;
	}
	return lenOfRaz;
}
