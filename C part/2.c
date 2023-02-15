#include <stdio.h>
int main() {
    char ch;
    printf("输入一个字符：");
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("%c的大写字母是：%c\n", ch, (ch-('a'-'A')));
    }
    else {
        printf("输入有误，请重新输入。\n");
    }
    return 0;
}