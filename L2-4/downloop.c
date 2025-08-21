#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>

const int cnt = 10;
int a[20];
#define DELTA sizeof(int)

int main() {
    // unsigned i;
    // for (i = cnt - 2; i >= 0; i--) {
    //     a[i] += a[i + 1];
    // }

    // for (i = cnt; i - DELTA >= 0; i -= DELTA) {
    //     a[i] += a[i + 1];
    // }

    // 不用unsigned
    // 或者用如下方法

    size_t i; // size_t define as unsigned value length = word size
    for (i = cnt - 1; i < cnt; i--) {
        printf("%zu\n", i);
    }
    printf("%zu\n", i);

    return 0;
}