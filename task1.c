#include <stdio.h>
int main(){
    int num1, num2, num3,minimumNumber,middleNumber, maximumNumber;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    printf("enter the third number:");
    scanf("%d",&num3);
    if((num1<=num2)&&(num2<=num3)){
        minimumNumber = num1; 
        middleNumber  = num2; 
        maximumNumber = num1;
         

    }
    else if((num1<=num3)&&(num3<=num2)){
        minimumNumber = num1; 
        middleNumber  = num3; 
        maximumNumber = num2;
         

    }
    else if((num2<=num1)&&(num1<=num3)){
        minimumNumber = num2; 
        middleNumber  = num1; 
        maximumNumber = num3; 

    }
    else if((num2<=num3)&&(num3<=num1)){
        minimumNumber = num2; 
        middleNumber  = num3; 
        maximumNumber = num1; 

    }
    else if((num3<=num1)&&(num1<=num2)){
        minimumNumber = num3; 
        middleNumber  = num1; 
        maximumNumber = num2; 

    }
    else if((num3<=num2)&&(num2<=num1)){
        minimumNumber = num3; 
        middleNumber  = num2; 
        maximumNumber = num1; 

    }
    printf("The sorted order of the numbers entered is %d, %d, %d",minimumNumber,middleNumber,maximumNumber);

}