#include <stdio.h>

int main(void)
{
    int jumsu;
    char grade;

    printf("점수 입력 : ");
    scanf("%d", &jumsu);

    if(jumsu >= 90)
    {
        grade = 'A';
    }
    else if(jumsu >= 80)
    {
        grade = 'B';
    }
    else if(jumsu >= 70)
    {
        grade = 'C';
    }
    else if(jumsu >= 60)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }

    printf("점수 등급 : %c학점\n", grade);
    return 0;
}