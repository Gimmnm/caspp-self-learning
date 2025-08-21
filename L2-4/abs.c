#include <stdio.h>
#include <limits.h>

int my_abs(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
    int a = my_abs(-__INT_MAX__ - 1); // corner case
    printf("%d", a);
    return 0;
}