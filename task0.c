#include <stdio.h>
int main(){
    int number,numberEntered, squareOfNumber;
    int sum=0;
    printf("Enter the number of numbers you would like to add:");
    scanf("%d",&number);
    printf("you have entered the number \"%d\"\n",number);
    for(int i=0; i<number;i++){
        printf("Enter number :");
        scanf("%d",&numberEntered);
        squareOfNumber= numberEntered*numberEntered;
        sum+=squareOfNumber;

    }
    printf("The sum of squares of the numbers entered is: %d ",sum);
    return 0;
}