// 演習 2-8: x=x&(x-1) で右端の 1 が消去されることを利用して効率の良い bitcount
// 関数を実装せよ．
#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned int x);
void printb(unsigned int v);

int main(int argc, char *argv[]) {
    int x = atoi(argv[1]);

    printb(x);
    printf(": ");
    printf("%d", bitcount(x));
    putchar('\n');
}

void printb(unsigned int v) {
    putchar('0');
    putchar('b');

    for (int i = sizeof(v) * 8 - 1; i >= 0; i--) {
        putchar('0' + ((v >> i) & 1));
    }
}

int bitcount(unsigned int x) {
    int i = 0;
    for (i = 0; x != 0; i++) {
        putchar(i);
        x = x & (x - 1);
    }
    return i;
}
