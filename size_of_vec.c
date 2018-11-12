#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define SIZE_OF_TYPE(x) (size_t)((x *)0+1)

int main(void)
{
    int a = 1;
    float b = 2.0f;
    double d = 5.3;

       
    

    printf("SIZE_OF_TYPE int::   %ld\n", SIZE_OF_TYPE(int));
    printf("SIZE_OF_TYPE float::   %ld\n", SIZE_OF_TYPE(float));
    printf("SIZE_OF_TYPE double::  %ld\n", SIZE_OF_TYPE(double));
    printf("SIZE_OF_TYPE char::  %ld\n", SIZE_OF_TYPE(char));


    return 0;
}
