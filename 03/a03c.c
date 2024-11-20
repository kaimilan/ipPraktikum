#include <stdio.h>

void array_max(int array[], int length){
    int n = array[0];
    for(int i = 1; i < length; i++){
        if(array[i] > n){
        n = array[i];
        }
    }
    printf("%d",n);
}

int main(){
    int array[] = {1, 2, 3};
    int length = 3;
    array_max(array, length);
    return 0;
}