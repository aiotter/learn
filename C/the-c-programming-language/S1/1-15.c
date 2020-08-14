// 演習1-15: 1-14.c を変換のための関数を使うように書き直せ．

#include <stdio.h>

float c2f(int celsius) {
    return (9.0 / 5.0) * celsius + 32.0;
}

int main() {
    float celsius;

    printf("%3c%6c\n", 'C', 'F');

    for (celsius = -10; celsius <= 50; celsius += 10) {
        printf("%3.0f %6.1f\n", celsius, c2f(celsius));
    }
}
