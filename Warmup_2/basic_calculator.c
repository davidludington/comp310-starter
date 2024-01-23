#include <stdio.h>


int main(int argc, int * * argv){
    double num1, num2;
    double sum, difference, product, quoitent;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quoitent = num1 / num2;
    


    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", difference);
    printf("Product: %f\n", product);
    printf("Quoitent: %f\n", quoitent);
    

    return 0;
}

