#include <stdio.h>

int main(void)
{
    int i=1, a, cnt=0, sum=0;
    float avg=0, sum2=0;
    printf("값 입력 : ");
    
    while (1)
    {
        scanf("%d", &a);
        if(a==0)
        {
            break;
        }
        sum=sum+a;
        cnt++;
    }
    sum2=sum;
    avg=sum2/cnt;
    printf("\n입력된 자료의 개수 : %d", cnt);
    printf("\n입력된 자료의 합계 : %d", sum);
    printf("\n입력된 자료의 평균 : %.1f", avg);

    return 0;
}