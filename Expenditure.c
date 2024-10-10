#include <stdio.h>
int main() 
{
    int ta, de;
    scanf("%d", &ta);
    scanf("%d", &de);
    int te= de * 30;
    if (ta >= te) 
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }
}