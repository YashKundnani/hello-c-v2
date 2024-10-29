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

int Pattern_ReversePyramid(int h){
    //printing first row
    int width = (2*h)-1;
    for(int i=1;i<=width;i++){
        printf("*");
        if(EvenFunc())
        
    }
    printf("\n");
    int currentHeight = h-1;
    while(currentHeight>=1){
        int PreBlanks = h - currentHeight;
        //if currentHeight == total height than no pre blanks are required.
        for(int i = PreBlanks; i>=1; i--){
            printf(" ");
        }
        
        for (int j = width- (2*PreBlanks); j>=1; j--){
            if(EvenFunc(j)==0){
                printf("*");

            }
            else{
                printf(" ");
            }
        }
        currentHeight--;
        printf("\n");
    }
    //pre-blanks of further rows    
    return 0;
}

int main()
{
    Pattern_ReversePyramid(6);
    return 0;

}