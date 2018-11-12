#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define SIZEOF_VAR(var) ((char*)(&var +1) - (char*)(&var))

int main(void)
{
    int a = 1;
    float b = 2.0f;
    double d = 5.3;

       
    

    printf("SIZEOF_VAR int:: a = %ld\n", SIZEOF_VAR(a));
    printf("SIZEOF_VAR float:: b = %ld\n", SIZEOF_VAR(b));
    printf("SIZEOF_VAR double:: d = %ld\n", SIZEOF_VAR(d));


    return 0;
}
