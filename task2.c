#include <stdio.h>
int main(){
    int number,numberEntered, squareOfNumber;
    int sum=0;
    printf("Enter the number  you would like to add:");
    scanf("%d",&number);
    
    while(number>=0){
        sum+=number;
        printf("Enter the number  you would like to add:");
        scanf("%d",&number);

    }
    printf("The sum of the numbers entered is :%d",sum);
}