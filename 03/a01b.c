#include <stdio.h>

int max(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
        if(b >= a && b >= c ){
        return b;
    }
        if(c >= b && c >= a){
        return c;
    }
    return 0;
}

int main(){
    int a = 2; 
    int b = 3;
    int c = 4;
    int d = max(a, b, c);
    printf("%d", d);
}

