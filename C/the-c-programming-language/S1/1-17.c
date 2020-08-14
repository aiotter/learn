// 演習 1-17: 80 行より長い行をすべて印字するプログラムを書け．

#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 80

int myGetline(char line[], int maxline);

int main() {
    int lineLength;
    char line[MAXLINE];

    while ((lineLength = myGetline(line, MAXLINE)) != 0) {
        if (lineLength >= THRESHOLD) {
            printf("%s", line);
        }
    }
}

int myGetline(char line[], int maxline) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}
