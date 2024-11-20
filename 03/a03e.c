#include <stdio.h>

void array_average(int array[], int length){
    double sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + array[i];
    }
    printf("%f",sum/length);
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int length = 5;
    array_average(array, length);
    return 0;
}