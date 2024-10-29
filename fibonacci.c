#include <stdio.h>
int fibonacci(int* num){
    int* count = 0;
    int a =0, b=1;
    printf("%p ",&a);
    printf("%p ",&b+10);

    
    /*
    while(count <= num){
    
        printf("%p ",&b);
        a = b;
        b = b+a;

        count++;
    }
    */
    
    return 0;
}
int main(){

    int num =100;
    int* pnum = &num;
    fibonacci(pnum);
    
    return 0;
}