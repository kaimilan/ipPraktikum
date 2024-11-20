#include <stdio.h>

int is_even(int a){
    if(a % 2 == 0){
      return 1;
    }
    if(a % 2 == 1){
        return 0;
    }
    return (-1);
}

int main(){
    int a = 3; 
    int b = is_even(a);
    printf("%d", b);
}

