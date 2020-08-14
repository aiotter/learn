// 演習 1-13: 入力した単語の長さをヒストグラムにしてプリントするプログラムを書け．

#include <stdio.h>

#define WORD_SIZE_LIMIT 20
#define CTX_INSIDE_WORD 1
#define CTX_OUTSIDE_WORD 0

int main() {
    int c, i, j, state, charCount;
    long wordLength[WORD_SIZE_LIMIT];

    charCount = 0;
    for (i = 0; i < WORD_SIZE_LIMIT; i++) {
        wordLength[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = CTX_OUTSIDE_WORD;
            wordLength[charCount]++;
            charCount = 0;
        } else if (state == CTX_OUTSIDE_WORD) {
            state = CTX_INSIDE_WORD;
            charCount++;
        } else {
            charCount++;
        }
    }

    for (i = 0; i < WORD_SIZE_LIMIT; i++) {
        printf("%2d | ", i);
        for (j = 0; j < wordLength[i]; j++) {
            putchar('X');
        }
        putchar('\n');
    }
}
