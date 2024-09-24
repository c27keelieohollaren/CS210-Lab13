/** lab13-03.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int num1;
    int num2;
    printf("Enter two values");
    scanf("%d%d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    printf("GCD = %d\n", gcd);
    return 0;

}