#include <stdio.h>

#define MY_DEBUG(A) printf("name of variable: " #A "\n line: %d \n file: %s", __LINE__, __FILE__);

int main(){

    int var = 5;

    MY_DEBUG(var);

    return 0;
}