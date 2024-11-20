#include <stdio.h>

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int a = 2; 
    int b = 3;
    int c = add(a, b);
    printf("%d", c);
}

