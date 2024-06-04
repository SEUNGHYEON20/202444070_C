#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

struct student
{
    int sno;
    char name[10];
    int age;
    struct date *sd;
};

int main()//14-6포인터를 구조체 멤버로 선언
{
    struct date d={2024, 03, 04};
    struct student s={202444070, "백승현", 20};

    s.sd=&d;

    printf("1.학번 : %d\n", s.sno);
    printf("2.성명 : %s\n", s.name);
    printf("3.나이 : %d\n", s.age);
    printf("입학 일자 : %d. %d. %d.\n", s.sd->year, s.sd->month, s.sd->day);
    return 0;
}