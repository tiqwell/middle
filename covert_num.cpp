int itc_covert_num(long long number, int ss)
{
    int a = 0, b = 1;
    while (number)
    {
        a += number % ss * b;
        number /= ss;
        b *= 10;
    }

    return a;
}