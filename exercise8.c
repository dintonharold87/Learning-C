#include <stdio.h>
int main(){
    int x=0xEFFF;
    int y=0x1000;
    printf("!x yields: %d (i.e., %u)\n", !x, !x);
    printf("!y yields: %d (i.e., %u)\n", !y, !y);
    return 0;
}