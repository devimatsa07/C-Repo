#include <stdio.h>
int main() {
    float basicSalary, da, hra, grossSalary;
    scanf("%f", &basicSalary);
    if (basicSalary < 0 || basicSalary > 100000) {
        return 1;
    }
    if (basicSalary <= 10000) {
        da = basicSalary * 0.8;
        hra = basicSalary * 0.2;
    } else if (basicSalary <= 20000) {
        da = basicSalary * 0.9;
        hra = basicSalary * 0.25;
    } else {
        da = basicSalary * 0.95;
        hra = basicSalary * 0.3;
    }
    grossSalary = basicSalary + da + hra;
    printf("%.2f\n", grossSalary);
}