#include <stdio.h>

int add(int a, int b)
{
    a=a+1;
    b=b+1;
}

int main(void)
{
    int a=1, b=2;

    add(a,b);
    printf("%d %d", a++, b++);
    
    return 0;
}