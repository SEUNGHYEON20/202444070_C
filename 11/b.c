#include <stdio.h>
#define DT 5
int sv(int score[], int size);

int main()//배열로 함수를 호출하여 총점과 평균 출력
{
    int score[DT]={88,96,75,81,99};
    int sum=0;
    float avg;

    printf("상수> #define DT 5\n");
    printf("배열> score[DT] = {88,96,75,81,99}");

    sum=sv(score,DT);
    avg=sum/5.0;

    printf("반환> 5개 과목의 총점 : %d\n", sum);
    printf("산출> 5개 과목의 평균 : %.2f\n", avg);
    return 0;
}

int sv(int score[], int size)
{
    int cnt, total=0;

    printf("\n사용자 정의 함수로 총점계산\n");

    for(cnt=0; cnt<size; cnt++)
    {
        total+= score[cnt];
    }
    return total;
}