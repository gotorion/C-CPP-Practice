#include <stdio.h>
double F2C(double);
int main() {
    double F;
    printf("输入温度(F): \n");
    scanf("%lf", &F);
    printf("转换成摄氏度(C): %.2lf\n", F2C(F));
    return 0;
}
double F2C(double fTemp) {
    return (fTemp - 32) * 5 / 9;
}