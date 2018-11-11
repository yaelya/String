#include <stddef.h>
#include <stdio.h>
size_t strLen(const char* c)
{
	
	size_t cuonter = 0;
	while(c[cuonter])
	{
		++cuonter;
	}
	return cuonter;
}

int main()
{
	//char* c = "guhikjbvgcf";
	size_t size_c = strLen("ojjjjjjooo");
	printf("%ld\n",size_c);

	return 0;
	
}
