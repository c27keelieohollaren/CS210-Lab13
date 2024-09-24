/** lab13-01.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>


int main() {
    int start;
    int end;
    printf("Enter two values");
    scanf("%d%d", &start, &end);
    if (start>end){
        while (start>end-1){
            printf("%d\n", start);
            start -= 1;
        }
    }
    else{
        while (start<end+1){
            printf("%d\n", start);
            start += 1;

    }
    }
    return 0;

}