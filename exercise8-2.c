#include <stdio.h>
int main(){
    int x=0xFFFF;
    int y=0x8888;
    int a=0xABCD;
    int b=0x4567;
    int e=0xDCBA;
    int f=0x1234;
    printf("0xFFFF^0x8888 yields: 0x%x\n", x^y);
    printf("0xABCD & 0x4567, yields: 0x%x\n", a & b);
    printf("0xDCBA | 0x1234 yields: 0x%X\n", e | f);
    
    return 0;
}