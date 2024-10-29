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
    if (i != h && i != 0){
        int PreBlanks = h - i;
        for (int j = 0; j<PreBlanks; j++){
            printf(" ");
        }
        //printf("*");

        /*
        ---------
        
            *      *
           *    *
          *  *
         **
        *******
        
        for(int j = 1; j <= (PreBlanks*2)-2; j++){
            printf(" ");
        }

        ---------
        */

        for(int k = (TotalWidth-(2*PreBlanks)); k >=1; k--){
            if (k == 1 || k == (TotalWidth-(2*PreBlanks)) ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        /*
        //PatternOneZero- In Solid Pyramid
        for(int k = (TotalWidth-(2*PreBlanks)); k >=1; k--){
            if (EvenFunc(k) == 1 ){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        */
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
    }
    else{
        for(int i = 1; i <= TotalWidth; i++){
            printf("*");
        }
    }
    printf("\n");
    }

    return 0;
    //Solve with recurssion
}

int main(){

    PatternPyramid(10);
    return 0;
}

/*
#include <studio.h>

int PrintPattern(int h){
    //pyramid height will be till 'h'

    if (h == 1){
        print(*)
        return 0;
    }
    else{
        SpaceInEachLine = (2*h)-1; //Width
        StartAndEndBlanks = h-currentH;
    }


    /*
    totalStarsInARow=2*h-1
    #invisibleStars=
    #visibleStars=
    
*/