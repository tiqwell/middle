int itc_second_simple_max_num(long long number) 
{
    if (number > 9)
    {
        int max = -1;
        int max2 = -1;

        while (number > 0) {
            int a = number % 10;

            if (a > max) {
                max2 = max;
                max = a;
            }
            else if (a < max && a > max2)
                max2 = a;

            number /= 10;
        }

        return max2;
    }
    return -1;
}
