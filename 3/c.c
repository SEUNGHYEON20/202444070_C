#include <stdio.h>

int main(void)
{
    int i=1,x,sum=0;

    scanf("%d",&x);

    while (1)
    {
        if (x<i)
        {
            break;
        }
        else if (i%2 == 0)
        {
            sum=sum+i;
        }
        i++;
    }

    printf("%d",sum);

    return 0;
}