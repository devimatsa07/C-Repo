#include <stdio.h>
int main() {
    int physics, chemistry, biology, mathematics,cs;
    float percentage;
    scanf("%d%d%d%d%d", &physics, &chemistry, &biology, &mathematics, &cs);
    int totalMarks = physics + chemistry + biology + mathematics + cs;
    percentage = (float)totalMarks / 5;
    if (percentage >= 90) 
    {
        printf("Grade A");
    }
    else if (percentage >= 80) 
    {
        printf("Grade B");
    } 
    else if (percentage >= 70) 
    {
        printf("Grade C");
    } 
    else if (percentage >= 60) 
    {
        printf("Grade D");
    } 
    else if (percentage >= 40) 
    {
        printf("Grade E");
    } 
    else 
    {
        printf("Grade F");
    }
}
