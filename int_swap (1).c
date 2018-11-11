#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define VOID_SWAP(void1, void2) do { typeof(void1) VOID_SWAP = void1; void1 = void2; void2 = VOID_SWAP; } while (0)

int main(void)
{
    int a = 1, b = 2;
    float x = 1.0f, y = 2.0f;

    VOID_SWAP(a, b);     // swap ints
    VOID_SWAP(x, y);     // swap floats

    printf("AFTER SWAPING:: a = %d, b = %d\n", a, b);
    printf("AFTER SWAPING:: x = %f, y = %f\n", x, y);

    return 0;
}
