#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch == 'V') 
    {
        printf("Violet\n");
    } 
    else if (ch == 'I') 
    {
        printf("Indigo\n");
    } 
    else if (ch == 'B') 
    {
        printf("Blue\n");
    } 
    else if (ch == 'G') 
    {
        printf("Green\n");
    } 
    else if (ch == 'Y') 
    {
        printf("Yellow\n");
    } 
    else if (ch == 'O') 
    {
        printf("Orange\n");
    } 
    else if (ch == 'R') 
    {
        printf("Red\n");
    } 
    else 
    {
        printf("-1\n");
    }
}