// 演習 1-12: 入力した単語を一行にひとつずつ印字するプログラムを書け．
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            c = '\n';
        } else if (state == OUT) {
            state = IN;
        }
        putchar(c);
    }
}
