#include <stdio.h>
#include <string.h>

#define SWAP(A, B, TYPE) TYPE SWAP = A; A = B; B = SWAP; 
#define SORT(ARRAY, SIZE, TYPE, COMPARE) for(int i = 0; i < (SIZE) - 1; i++){\
    for (int j =  0; j < (SIZE) - i - 1; j++)\
    {\
        if(ARRAY[j] COMPARE ARRAY[j + 1]){\
        SWAP(ARRAY[j], ARRAY[j + 1], TYPE);\
        }\
    }\
}


int main(){

    int arr[5] = {2, 4, 7, 3, 5};

    SORT(arr, 5, int, >);

    for(int i = 0; i < 5; i++){
        printf("%d; ", arr[i]);
    }

    
    return 0;
}