// 数组中的值逆序存放
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void reverse(int [], int);
int main() {
    int n = 0;
    printf("输入数组的长度: ");
    scanf("%d", &n);
    printf("数组的长度为: %d\n", n);
    

    srand((unsigned)time(NULL));
    int * array = malloc((n + 1) * sizeof(int));
    for (int i = 0; i < n; i++)
        array[i] = rand() % 100 + 1;
    printf("生成的随机数组为: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    reverse(array, n);
    printf("\n");
    printf("逆序后的数组: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
void reverse(int array[], int size) {
    for (int i = 0, j = size -1; i < j; i++, j--) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}