#include <stdio.h>

int main()
{
    int scores[5];
    int sum=0;
    int average;
    int i;

    for(i=0; i<5; i++)
    {
        printf("%d번째 학생의 성적 입력 : ",i+1);
        scanf("%d",&scores[i]);
    }

    for(i=0; i<5; i++)
    {
        sum = sum + scores[i];
    }
    average = sum/5;
    printf("전체 학생의 평균은 %d 입니다.\n",average);

    for(i=0; i<5; i++)
    {
        if(scores[i]>=average)
            printf("학생 %d : 합격\n",i+1);
        else
            printf("학생 %d : 불합격\n",i+1);
    }
}