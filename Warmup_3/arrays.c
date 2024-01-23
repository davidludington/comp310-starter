#include <stdio.h>


int main(int argc, int * * argv){
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum+= numbers[i];
    }

    double average = sum / (double)5;

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);

    return 0;
}
