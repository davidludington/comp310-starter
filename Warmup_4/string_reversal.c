#include <stdio.h>
#include <string.h>


int main(int argc, int * * argv){
    char str[] = "Hello";

    for(int i = 0, j = strlen(str) - 1; i < j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    } 

    printf("%s\n", str);


}
