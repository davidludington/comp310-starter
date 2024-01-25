#include <stdio.h>

int factorial(int num){
    int product = 1;

    if(num <= 0){
        return 1;
    }

    while(num > 0){
        product = product* num;
        num--;
    }
    return product;
}


int main(int argc, char **argv){
    int number = 8;

    printf("The factoral of %d is %d\n", number, factorial(number));
}
