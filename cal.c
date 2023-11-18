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

    printf("두 개의 실수를 입력하시오 : ");
    scanf("%lf %lf",&i ,&j);
   
    printf("두 수의 곱 : %lf\n",get_mul(i,j));
    printf("두 수의 나눗셈 : %lf",get_div(i,j));
}
