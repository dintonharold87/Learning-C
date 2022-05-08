#include <stdio.h>
int main(){
    
    for(int input=' '; input!='q'?1:0; ){
        input = getchar();
    }
    printf("You have entered 'q' character");
    return 0;
}