#include <stdio.h>

int money=50000;

void save(int amount)
{
    money = money+amount;
    printf("현재 잔액은 %d 입니다.\n",money);
}

void draw(int amount)
{
    if(money<amount)
    {   
        printf("금액이 부족합니다.\n");
        printf("현재 잔액은 %d 입니다.\n",money);
    }
    else
    {
        money = money-amount;
        printf("현재 잔액은 %d 입니다.\n",money);
    }
}

int main(void)
{
    int n;
    int amount;
    
    while(1)
    {
        printf("메뉴를 선택하세요 - 저축<1>, 인출<2>, 종료<3> : ");
        scanf("%d",&n);

        if(n==3){
            printf("종료합니다.");
            break;}
        else if(n==1)
        {
            printf("저축할 금액 : ");
            scanf("%d",&amount);
            save(amount);
        }
        else if(n==2)
        {
            printf("인출할 금액 : ");
            scanf("%d",&amount);
            draw(amount);
        }
        
    }
}