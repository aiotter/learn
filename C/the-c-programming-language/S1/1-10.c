// 演習 1-10: 各タブを \t に，各バックスペースを \b に，各バックスラッシュを \\ に置き換えながら，入力を出力に複写するプログラムを書け．

#include <stdio.h>

int c;

int main() {
    while ((c = getchar()) != EOF) {
        switch (c) {
        case '\t':
            printf("\\t");
            break;
        case '\b':
            printf("\\b");
            break;
        case '\\':
            printf("\\");
            break;
        default:
            putchar(c);
            break;
        }
    }
}
