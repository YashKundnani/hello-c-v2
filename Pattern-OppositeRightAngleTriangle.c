#include <stdio.h>

int Pattern_OppositeOneSidePyramid(int h){
    for(int k=1; k<=h; k++){
        for(int i= 1; i<=h-k; i++)
        {
            printf(" ");
        }
        for (int j = h-k+1; j<=h; j++){
            printf("*");
        }
        printf("\n");
    }
    

    /*
    for(int z = 1;z<=h; z++){
        for (int i = h-1; i>z; i--)
        {
            printf(" ");
        }
        for (int j = z; j<h; j++)
        {
            printf("*");
        }
        //printf("*");
        printf("\n");
    }

    ****
    ***
    **
    *


    */
    
    return 0;
}

int main() {

    Pattern_OppositeOneSidePyramid(5);
    return 0;
}

