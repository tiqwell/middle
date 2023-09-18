int itc_rev_bin_num(long long number)
{
    int a = 0, b = 0, f = 2;
    while (number)
    {
        for (int i = 0; i < b; i++)
            f *= b;
        a += number % 10 * f;
        number /= 10;
        b++;
    }

    return a;
}