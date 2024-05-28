#include <stdio.h>

int main()//교안 52쪽? *++p, ++*p 이해하기
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=a;

    printf("%d\n", *p);

    printf("%d\n", *++p);//가리키고 있는 주소?의 다음 주소의 데이터값
    printf("%d", ++*p);//가리키고 있는 주소의 데이터 값을 1증가(아닌가)
}