#include <stdio.h>

int money=50000;

void save(int amount)
{
    money = money+amount;
    printf("���� �ܾ��� %d �Դϴ�.\n",money);
}

void draw(int amount)
{
    if(money<amount)
    {   
        printf("�ݾ��� �����մϴ�.\n");
        printf("���� �ܾ��� %d �Դϴ�.\n",money);
    }
    else
    {
        money = money-amount;
        printf("���� �ܾ��� %d �Դϴ�.\n",money);
    }
}

int main(void)
{
    int n;
    int amount;
    
    while(1)
    {
        printf("�޴��� �����ϼ��� - ����<1>, ����<2>, ����<3> : ");
        scanf("%d",&n);

        if(n==3){
            printf("�����մϴ�.");
            break;}
        else if(n==1)
        {
            printf("������ �ݾ� : ");
            scanf("%d",&amount);
            save(amount);
        }
        else if(n==2)
        {
            printf("������ �ݾ� : ");
            scanf("%d",&amount);
            draw(amount);
        }
        
    }
}