#include <stdio.h>

int cal(int x, int y)
{
    int n1;
    int n2;
    int n3;
    int n4;

    n1 = (y-x)/5000;
    n2 = (y-x-(5000*n1))/1000;
    n3 = (y-x-(5000*n1)-(1000*n2))/500;
    n4 = (y-x-(5000*n1)-(1000*n2)-(500*n3))/100;

    printf("��õ��: %d ��\n",n1);
    printf("õ��: %d ��\n",n2);
    printf("�����: %d ��\n",n3);
    printf("���: %d ��\n",n4);
}

int main()
{
    int x;
    int y;
    printf("���� ���� �Է��Ͻÿ�.: ");
    scanf("%d",&x);
    printf("�մ��� ������ �ݾ� : ");
    scanf("%d",&y);

    cal(x,y);
    return 0;
}