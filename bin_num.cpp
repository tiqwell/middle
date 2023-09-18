long long itc_bin_num(long long number)
{
    int a = 0, b = 1;
    while (number)
    {
        a += number % 2 * b;
        number /= 2;
        b *= 10;
    }
    return a;
}