#include <stdio.h>

int main(void)
{
    int i=1,a;

    printf("원하는 단을 입력하세요.");
    scanf("%d", &a);

    while (i<10)
    {
        printf("%d * %d = %d\n", a, i, a*i);
        i++;
    }
    return 0;
}