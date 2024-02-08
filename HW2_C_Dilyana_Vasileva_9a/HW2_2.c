#include <stdio.h>

#define BIGGER_NUM(A, B) ((A)>(B))?(A):(B)
int main(){

    int x = 2, y = 0, a;
    
    a = BIGGER_NUM(x, y);

    printf("%d is bigger", a);

    return 0;
}