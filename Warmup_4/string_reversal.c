#include <stdio.h>
//#include <string.h>


int main(int argc, int * * argv){
    char str[] = "Hello";
    int length = sizeof(str)/sizeof(str[0]) - 1;

    for(int i = 0, j = length -1; i < j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    } 

    printf("%s\n", str);


}
