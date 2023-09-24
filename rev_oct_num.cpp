#include "middle.h"
int itc_rev_oct_num(long long number) {
    int a = 0;
    int power = 0;

    while (number > 0) {
        int b = number % 10;
        a += b * itc_pow(8, power);
        power++;
        number /= 10;
    }

    return a;
}