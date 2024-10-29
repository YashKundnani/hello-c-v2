#include <stdio.h>

int EvenFunc(int n){
    int tempcheck;
    tempcheck = n/2;
    int check = 0;
    if (tempcheck * 2 == n){
        // number is even
        check = 1;
    }
    else {
        //number is odd;
        check = 0; 
    }
    return check;
}
int PatternPyramid(int h){
    int TotalWidth = 2*h -1;
    //currentHeight == i in the loop below

    for (int i = 0; i<=h; i++){

        int PreBlanks = h - i;
        for (int j = 1; j<=PreBlanks; j++){
            printf(" ");
        }
        //PatternOneZero
        for(int k = (TotalWidth-(2*PreBlanks)); k >=1; k--){
            if (EvenFunc(k) == 1 ){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        /*
        int PatternOneZero = (TotalWidth - PreBlanks*2);
        while(PatternOneZero > 0){
            if(PatternOneZero % 2 == 0){
                printf(" ");
            }
            else{
                printf("*");
            }
            PatternOneZero--;
        }
        */
        for (int j = 0; j < PreBlanks; j++)
        {
            printf(" ");
        } 
        printf("\n");
    }

    return 0;
    //Solve with recurssion
}

int main(){

    PatternPyramid(2);
    return 0;
}