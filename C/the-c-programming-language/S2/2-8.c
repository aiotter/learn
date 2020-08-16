// 演習 2-8: 整数 x の値を右に n ビット回転する関数 rightrot(x,n) を書け．
#include <stdio.h>
#include <stdlib.h>

int rightrot(unsigned int x, unsigned int n);
void printb(unsigned int v);

int main(int argc, char *argv[]) {
    int x = atoi(argv[1]);
    int n = atoi(argv[2]);
    int b = rightrot(x, n);

    printb(x);
    printf(" -> ");
    printb(b);
    putchar('\n');
}

void printb(unsigned int v) {
    putchar('0');
    putchar('b');

    for (int i = sizeof(v) * 8 - 1; i >= 0; i--) {
        putchar('0' + ((v >> i) & 1));
    }
}

int rightrot(unsigned int x, unsigned int n) {
    int rightEndMask = (1 << n) - 1;
    int rightEndBits = x & rightEndMask;

    x >>= 1;
    return x | (rightEndBits << (sizeof(x) * 8 - n));
}
