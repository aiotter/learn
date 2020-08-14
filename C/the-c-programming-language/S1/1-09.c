// ２つ以上の空白をひとつの空白に置き換えながら，入力を出力に複写するプログラムを書け．
#include <stdio.h>

int main() {
    int c;

    for (c = getchar(); c != EOF;) {
        putchar(c);

        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;

        } else {
            c = getchar();
        }
    }
}
