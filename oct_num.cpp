long long itc_oct_num(long long number)
{
    int a = 0, b = 1;
    while (number)
    {
        a += number % 8 * b;
        number /= 8;
        b *= 10;
    }

    return a;
}