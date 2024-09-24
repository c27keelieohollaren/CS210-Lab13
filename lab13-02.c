/** lab13-02.c
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
    int num = 0;
    int sum = 0;
    printf("Enter a value: ");
    scanf("%d", &num);
    sum = isArmstrong(num);
    if(sum != 0){
        printf("%d is an Armstrong number.\n", num);
    }
    else{
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;

}