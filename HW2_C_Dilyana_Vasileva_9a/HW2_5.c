#include <stdio.h>
#include <string.h>

#define SWAP(A, B, TYPE) TYPE SWAP = A; A = B; B = SWAP; 


int main(){

    char x = 'a', y = 'b';
    

    printf("%c; %c \n", x, y);

    SWAP(x, y, char);

    printf("%c; %c", x, y);

    return 0;
}