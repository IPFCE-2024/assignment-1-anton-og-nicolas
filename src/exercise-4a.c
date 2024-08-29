#include <stdio.h>

int main(void)
{
    int a, b, c, d, z;
    printf("Enter four numbers \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    z = a + b + c + d;
    printf("The sum is %d \n", z);

    return 0;
}
