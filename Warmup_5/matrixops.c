#include <stdio.h>

/*
I could not figure out how to get the program to return the 2-d array as you did in the java example
so I gave the methods a void return type and created a sum and product array in main and passed them 
as parameters in the add and product methods. These methods also do not allow for matricies of varied 
size  

*/


void addMatricies(int a[2][2], int b[2][2], int sum[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatricies(int a[2][2], int b[2][2], int product[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            product[i][j] += a[i][j]*b[i][j];
        }
    }

}

void printMatrix(int a[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d \n", a[i][j]);
        }
    }
}

int main(int argc, int * * argv){
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{5,6},{7,8}};
    int sum[2][2], product[2][2];

    addMatricies(matrix1, matrix2, sum);
    printf("Matrix addition: \n");
    printMatrix(sum);

    multiplyMatricies(matrix1, matrix2, product);
    printf("Matrix multiplication: \n");
    printMatrix(product);

    return 0;


}