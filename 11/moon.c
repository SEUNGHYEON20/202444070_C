#include <stdio.h>

int main()
{
    int a=0,i,b=0;
    scanf("%d %d", &a, &b);
    int len[a];


    for(i=0; i<a-1; i++)
    {
        scanf("%d", &len[i]);
    }
    
    for(i=0; i<a-1; i++)
    {
        if(len[i]<b)
        {
            printf("%d ",len[i]);
        }
    }
    return 0;
}