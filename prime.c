#include <stdio.h>

int main()
{
    int i;
    int j;
    int count;

    for(i=2; i<=100; i++)
    {
        count=1;
        for(j=2; j<=i; j++)
            if(i%j==0)
            {
                count = count+1;
            }
        if(count==2)
            printf("%d ",i);
    }
}