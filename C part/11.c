#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    printf("%d = ", num);
    if (num == 0 || num == 1)
        printf("%d\n", num);
    else {
        printf("1 ");
        int i = 2;
        while (num != 1) {
            if (num % i == 0) {
                printf("* %d", i);
                num /= i;
            }
            else
                i++;
        }
    }
    printf("\n");
    return 0;
}