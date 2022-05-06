/* Write a program that uses getchar() and putchar() to read in a character entered
by the user and write the character to the screen. */
#include<stdio.h>
int main(){
    printf("Please enter a character: ");
int characterEnter = getchar();
printf("\nThe character you've entered is: ");
char entered= putchar(characterEnter);

}