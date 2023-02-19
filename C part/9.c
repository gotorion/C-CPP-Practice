#include <stdio.h>

int main() {
    int n = 0;
    double min = 100, max = 0;
    double score;
    printf("依次输入成绩, 输入负数结束: \n");
    while (scanf("%lf", &score)) {
        if (score < 0)
            break;
        n++;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }
    if (n > 0)
        printf("最大成绩是: %.2lf, 最小成绩是 %.2lf\n", max, min);
    else 
        printf("输入成绩个数小于1个, 不符合要求\n");
    return 0;
}