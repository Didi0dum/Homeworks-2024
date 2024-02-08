#include <stdio.h>

#define PRINT printf("%d; ", arr[i])
#define ARR_PRINT for(int i = 0; i < 5; i++){ \
                        PRINT; \
                    }

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    ARR_PRINT;

}