#include <stdio.h>

void array_sum(int array[], int length){
    int n = 0;
    for(int i = 0; i < length; i++){
        n = n + array[i];
    }
    printf("%d",n);
}

int main(){
    int array[] = {1, 2, 3};
    int length = 3;
    array_sum(array, length);
    return 0;
}
