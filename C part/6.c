//非递归实现斐波那契
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Funct(int n);
int main() {
    int n;
    printf("输入n值: \n");
    scanf("%d", &n);
    printf("斐波那契数列的第%d项是%d\n", n, Funct(n));
    return 0;
}

int Funct(int n) {
    assert (n >= 0);
    if (n == 1 || n == 0)
        return 1;
    int * array = malloc((n + 1) * sizeof(int));
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < n; ++i) {
        array[i] = array[i - 1] + array[i - 2];
    }
    return array[n - 1];
}