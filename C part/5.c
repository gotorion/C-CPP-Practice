#include <stdio.h>

int main() {
    int score;
    printf("请输入成绩: ");
    scanf("%d", &score);
    printf("你输入的成绩是: %d\n你的等级是: ", score);
    if (score > 100 || score < 0)
        printf("输入有误");
    else if (score >= 90)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else
        printf("D\n");
    return 0;
}