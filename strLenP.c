#include <stddef.h>
#include <stdio.h>
size_t strLen(const char* c)
{
	const char* ptr = c;
	size_t cuonter = 0;
	while(*c)
	{
		++c;
	}
	return c - ptr;
}

int main()
{
	//char* c = "guhikjbvgcf";
	size_t size_c = strLen("ojjjjjjooo");
	printf("%ld\n",size_c);

	return 0;
	
}
