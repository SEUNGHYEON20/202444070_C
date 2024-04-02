#include <stdio.h>

int main()
{
    for(int i=5; ; i--)
    {
        if(i==1)
        {
            break;
        }
        printf("*");
    }
}