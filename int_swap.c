#include <stddef.h>
#include <stdio.h>
void int_swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int num1 = 5;
	int num2 = 8;
	int_swap(&num1,&num2);
	printf("%d\n",num1);
	return 0;
	
}
