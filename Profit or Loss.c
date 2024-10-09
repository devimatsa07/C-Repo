#include <stdio.h>
int main() {
    float cp,sp;
    scanf("%f%f",&cp,&sp);
    if (cp== sp) 
    {
        printf("No Profit and No Loss");
    } 
    else if (sp>cp) 
    {
        printf("Profit");
    } 
    else 
    {
        printf("Loss");
    }
}