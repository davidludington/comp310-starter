#include <stdio.h>


int main(int argc, int * * argv){
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int length = *(&numbers + 1) - numbers;

    for(int i = 0; i < length; i++){
        sum+= numbers[i];
    }

    double average = sum / (double)length;

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);

    return 0;
}
