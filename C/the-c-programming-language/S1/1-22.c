// 演習 1-22: 入力を n 行目で折りたたむプログラムを書け．

#include <stdio.h>

#define FOLDING_LIMIT 50

int main() {
    for (int i = 0, c; (c = getchar()) != EOF; i++) {
        if (c == '\n')
            i = 0;
        if (i > FOLDING_LIMIT) {
            putchar('\n');
            i = 0;
        }
        putchar(c);
    }
}
