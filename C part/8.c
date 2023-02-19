#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isTriangle(float, float, float);
float areaOfTriangle(float, float, float);
int typeOfTriangle(float, float, float);
int main() {
    float side_1, side_2, side_3;
    printf("依次输入三条边: ");
    scanf("%f %f %f", &side_1, &side_2, &side_3);
    printf("输入的三条边依次为: %.2f %.2f %.2f\n", side_1, side_2, side_3);
    if (isTriangle(side_1, side_2, side_3)) {
        printf("可以组成三角形, 其面积为 %.2f, ", areaOfTriangle(side_1, side_2, side_3));
        int type = typeOfTriangle(side_1, side_2, side_3);
        if (type == 1)
            printf("是等边三角形\n");
        if (type == 2)
            printf("是等腰三角形\n");
        if (type == 3)
            printf("是直角三角形\n");
        else
            printf("是普通三角形\n");
    }
    else
        printf("不能组成三角形");
    return 0;
}
int typeOfTriangle(float a, float b, float c) {
    if (a == b && b == c)
        return 1;
    if (a == b || b == c || a == c)
        return 2;
    if ((a*a + b*b) == c*c || (a*a + c*c) == b*b || (b*b + c*c) == a*a)
        return 3;
    return 4;
}
float areaOfTriangle(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}
bool isTriangle(float a, float b, float c) {
    if ((a+b)<=c || (a+c)<=b || (b+c)<=a)
        return false;
    if (fabs(a-b)>=c || fabs(a-c)>=b || fabs(b-c)>=a)
        return false;
    return true;
}