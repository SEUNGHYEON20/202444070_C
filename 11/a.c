#include <stdio.h>

int main()//보이는 막대기 개수
{
    int a=0,i=0,j=0,max=0,cnt=0;
    scanf("%d",&a);
    int len_1[a];

    for(i=0; i<a; i++)
    {
        scanf("%d",&len_1[i]);
    }

    for(j=a-1; j>=0; j--)
    {
        if(len_1[j]>max)
        {
            max=len_1[j];
            cnt++;
        }
    }
    printf("%d",cnt);
}