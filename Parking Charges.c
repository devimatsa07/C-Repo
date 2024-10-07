#include <stdio.h>
int main() 
{
    int x,y,z,res;
    scanf("%d%d%d",&x,&y,&z);
    if (z>1) 
    {
        res =x+(z-1)*y;
    } 
    else 
    {
        res = x;
    }
    printf("%d\n",res);
}
