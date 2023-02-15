#include <stdio.h>

int main(){
    int x = 0;
    printf("Enter x:\n");
    scanf("%d", &x);
    printf("x = %d\n", x);
    int y;
    if (x < 5)
        y = x;
    else if (x >= 15)
        y = x - 6;
    else 
        y = x + 6;
    printf("y = %d\n", y);

    return 0;
}
