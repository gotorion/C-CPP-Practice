#include <stdio.h>
#include <math.h>
int main() {
    for  (int i = 100; i <= 999; ++i) {
        int sum = 0;
        int tmp = i;
        while (tmp != 0) {
            sum += pow(tmp % 10, 3);
            // printf("%d ", sum);
            tmp /= 10; 
        }
        if (sum == i)
            printf("%d 是水仙花数\n", i);
    }
    return 0;
}