#include <stdio.h>


int linearSearch(int a[], int array_size, int target){

    for(int i = 0; i < array_size; i++){
        if(a[i] == target){
            return i;
        }
    }
    return -1;
}

int main(int argc, char **argv){
    int numbers[] = {1, 4, 7, 9, 12};
    int target = 9;
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int index = linearSearch(numbers, length, target);

    if(index != -1){
        printf("Element found at index: %d\n", index);
    } else{
        printf("Element not found\n");
    }
    


}
