/** lab13functs.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#include <math.h>
#include <stdio.h>
int isArmstrong(int num){
    int count = 0;
    int num1 = num;
    int sum = 0;
    int digit = 0;
    int i = 0;
    while(num>0){
        num = num/10;
        count+=1;
    }
    num = num1;
    for(i=0; i<count;i++){
        digit = num1 % 10;
        sum += pow(digit, count);
        num1 = num1/10;
    }
    if(sum == num){
        return 1;
    }
    else{
        return 0;
    }
    
}

int findGCD(int num1, int num2){
    while(num1!=num2){
        if(num1>num2){
            num1 = num1-num2;
        }
        if(num2>num1){
            num2 = num2-num1;
        }
    
    }
    return num1;
}