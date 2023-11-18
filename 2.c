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

    printf("오천원: %d 장\n",n1);
    printf("천원: %d 장\n",n2);
    printf("오백원: %d 개\n",n3);
    printf("백원: %d 개\n",n4);
}

int main()
{
    int x;
    int y;
    printf("물건 값을 입력하시오.: ");
    scanf("%d",&x);
    printf("손님이 지불한 금액 : ");
    scanf("%d",&y);

    cal(x,y);
    return 0;
}