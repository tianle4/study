#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    printf("The sum of 2 and 3 is %d\n", sum(2, 3));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}