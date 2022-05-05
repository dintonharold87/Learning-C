#include <stdio.h>
int multiply_integers(int x, int y){
    int result= x*y;
    return result;
}

int main() {
   int multiplicaion= multiply_integers(4,6);
    printf("The product of 4 and 6 is:%d",multiplicaion);
    return 0;
}