#include <stdio.h>

int Pattern(int height){
    for(int i=0; i<height; i++){
        for (int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    Pattern(10);
    return 0;
}