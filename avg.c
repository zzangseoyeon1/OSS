#include <stdio.h>

int main()
{
    int scores[5];
    int sum=0;
    int average;
    int i;

    for(i=0; i<5; i++)
    {
        printf("%d��° �л��� ���� �Է� : ",i+1);
        scanf("%d",&scores[i]);
    }

    for(i=0; i<5; i++)
    {
        sum = sum + scores[i];
    }
    average = sum/5;
    printf("��ü �л��� ����� %d �Դϴ�.\n",average);

    for(i=0; i<5; i++)
    {
        if(scores[i]>=average)
            printf("�л� %d : �հ�\n",i+1);
        else
            printf("�л� %d : ���հ�\n",i+1);
    }
}