// 空白，タブ，改行を数えるプログラムを書け．
#include <stdio.h>

int main() {
    int c, space_count, tab_count, newline_count;

    space_count = 0;
    tab_count = 0;
    newline_count = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
        case ' ':
            space_count++;
            break;
        case '\t':
            tab_count++;
            break;
        case '\n':
            newline_count++;
            break;
        default:
            break;
        }
    }

    printf("space: %d, tab: %d, newline: %d\n", space_count, tab_count,
           newline_count);
}
