#include <stdio.h>
#include <stdlib.h>

struct std
{
    int sno;
    char name[10];
    float avg;
};

int main(void)//14-1 구조체 선언 및 구조체 멤버 출력
{
    struct std s;
    printf("구조체 멤버 초기화 선언\n");
    s.sno=202444070;
    strcpy(s.name,"백승현");
    s.avg=88.33;

    printf("구조체 멤버 출력\n");
    printf("학번 : %d\n", s.sno);
    printf("성명 : %s\n", s.name);
    printf("점수 : %.2f\n", s.avg);
    return 0;
}
