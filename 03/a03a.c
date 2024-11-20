#include <stdio.h>

void print_array(int array[], int length){
    printf("[");
    for(int i = 0; i < length; i++){
        printf("%d", array[i]);
        if( i < length - 1){
            printf(", ");
        }
    }
    printf("]");
}

int main(){
    int array[] = {1, 2, 3};
    int length = 3;
    print_array(array, length);
    return 0;
}
