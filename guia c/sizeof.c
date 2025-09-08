#include <stdio.h>
#include <stdint.h> 

// EJERCICIO 3, 4

int main(){
    uint8_t c = 100;
    uint32_t i = 123456;
    int64_t s = -8712;
    uint64_t l = 1234567890;

    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %ld \n", sizeof(s), s);
    printf("int(%lu): %d \n",   sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);

    return 0;
}
