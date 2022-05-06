/* Display the two numbers 123 and 123.456 and align them at the left edge of the field. */
#include <stdio.h>
int main(){
int a=123;
double b=123.456;
printf("%-3d\n",a);
printf("%-6.3f",b);
}