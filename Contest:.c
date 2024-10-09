#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int tp=a+2*b;
    if(tp>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}