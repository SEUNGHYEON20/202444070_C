#include <stdio.h>

int main(void)
{
    int i=0,a=0;

    printf("원하는 단을 입력하세요.");
    scanf("%d", &a);

    for(i=1; i<10; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}