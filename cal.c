#include <stdio.h>

double get_mul(double x,double y)
{
    double v;
    v= x*y;
    return v;
}

double get_div(double x,double y)
{
    double b;
    b=x/y;
    return b;
}

int main()
{
    double i;
    double j;

    printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
    scanf("%lf %lf",&i ,&j);
   
    printf("�� ���� �� : %lf\n",get_mul(i,j));
    printf("�� ���� ������ : %lf",get_div(i,j));
}
