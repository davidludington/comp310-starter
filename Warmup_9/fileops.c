#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){

    FILE *fptr;

    //open file to write to
    fptr = fopen("example.txt", "w");
    if(fptr == NULL){
        printf("error\n");
        exit(1);
    }
    fprintf(fptr, "%s", "hello world");
    fclose(fptr);
    
    
    //read from file char by char
    fptr = fopen("example.txt", "r");
    char c;
    c = fgetc(fptr);
    if(fptr == NULL){
        printf("error\n");
        exit(1);
    }
    while(c != EOF){
        printf("%c", c);
        c = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

    return 0;

     
}
