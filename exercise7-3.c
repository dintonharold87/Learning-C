#include <stdio.h>
int main(){
    int input= ' ';

    while(input != 'K'){
        input= getchar();
        putchar(input);
         
    }
    printf("Enter K to terminate");
    return 0;
}