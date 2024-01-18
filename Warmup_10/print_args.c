#include <stdio.h>
#include <stlib.h>

int main(int argc, char *argv[]){
    for(int i=1; i < argc; i++){
        printf("i=%d arg[%d]=%s\n", i, i, argv[i]);
    }
}