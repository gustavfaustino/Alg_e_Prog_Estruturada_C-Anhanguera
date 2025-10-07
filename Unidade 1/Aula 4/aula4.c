#include <stdio.h>

int main(void)
{
    int x, y;

    x = 10;y = x++;
    printf("y = x++ : valor de y = %d\n", y);
    printf("y = x++ : valor de x = %d\n", x);

    x = 10; y = ++x;
    printf("y = ++x : valor de y = %d\n", y);
    printf("y = ++x : valor de x = %d\n", x);

    x = 10; y = x--;
    printf("y = x-- : valor de y = %d\n", y);
    printf("y = x-- : valor de x = %d\n", x);

    x = 10; y = --x;
    printf("y = --x : valor de y = %d\n", y);
    printf("y = --x : valor de x = %d\n", x);

    return 0;
}