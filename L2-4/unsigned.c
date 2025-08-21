#include <stdio.h>
#include <limits.h>

int main() {

    unsigned int a = UINT_MAX >> 1;
    int b = a;
    int c = a + b;
    c = c + 1;
    unsigned int d = a + b;
    int flag = c > d; // 都会变成unsigned
    printf("flag = %d\n", flag);
    int flag2 = (unsigned)(-1) > 0;
    int flag3 = -1 > 0U;
    printf("flag2 = %d\n", flag2);
    printf("flag3 = %d\n", flag3);
    printf("c = %d, d = %ud", c, d);

    return 0;
}