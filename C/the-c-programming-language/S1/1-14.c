// 演習 1-14: 入力中の異なる文字の頻度をヒストグラムにプリントするプログラムを書け．

#include <stdio.h>

#define CHAR_CODE_BEGINS ' '
#define CHAR_CODE_ENDS '~'


int main() {
    int c, i, j;
    long charCount[CHAR_CODE_ENDS - CHAR_CODE_BEGINS + 1];

    for (i = 0; i < (CHAR_CODE_ENDS - CHAR_CODE_BEGINS + 1); i++) {
        charCount[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (CHAR_CODE_BEGINS <= c && c <= CHAR_CODE_ENDS) {
            charCount[c - CHAR_CODE_BEGINS]++;
        }
    }

    for (i = 0; i < (CHAR_CODE_ENDS - CHAR_CODE_BEGINS + 1); i++) {
        printf("%c | ", i + CHAR_CODE_BEGINS);
        for (j = 0; j < charCount[i]; j++) {
            putchar('X');
        }
        putchar('\n');
    }
}
