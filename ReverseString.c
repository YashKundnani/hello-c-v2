//Program to reverse string
char * ReverseString(char* string1, int length){
    
    int start = 0;
    int end = length-1;
    char temp;
    temp = string1[start];
    string1[start] = string1[end];
    string1[end] = temp;

}

int main