#include <stdio.h>
int main() {
    int array[3][3] = {
        {1,3,5},
        {2,4,6},
        {3,7,9},
    };
    int sum = 0;
    sum += (array[1][1] + array[2][2] + array[0][0]);
    printf("对角线矩阵之和为：%d\n", sum);
    return 0;
}