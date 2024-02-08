#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

int quit= 5, external = 6, a = 7, b = 8;

DEFINE_COMMAND(quit, external){
    printf("\naaaaaaa1");
    }

DEFINE_COMMAND(a, b){
    printf("\naaaaaaa2");
}

int main(){

    COMMAND(quit, external)();
    COMMAND(a, b)();
    
    return 0;
}