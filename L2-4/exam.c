#include <stdint.h>
#include <stdio.h>

typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf("%p\t0x%02x\n", (void *)(start + i), start[i]);
    }
}

int main(void) {
    int x = 0x12345678;
    double d = 3.1415926;
    const char s[] = "ABC"; // 包含结尾的 '\0'

    puts("int x bytes:");
    show_bytes((pointer)&x, sizeof x);

    puts("\ndouble d bytes:");
    show_bytes((pointer)&d, sizeof d);

    puts("\nstring s bytes:");
    show_bytes((pointer)s, sizeof s); // 打印 'A','B','C','\0'
    return 0;
}