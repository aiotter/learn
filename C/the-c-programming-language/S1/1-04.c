// 演習1-4: 温度を摂氏から華氏へ変換するプログラムを書け．

#include <stdio.h>

int main() {
    float fahr, celsius;

    printf("%3c%6c\n", 'C', 'F');

    for (celsius = -10; celsius <= 50; celsius += 10) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
    }
}
