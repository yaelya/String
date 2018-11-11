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
char* strCopy_ptr(char* c1 ,char* c2)//???
{
	
	const char* new_str = c1;
	int counter = 0;
	while(*c1)
	{	
		*c1 = *c2;
		++c1;
		++c2;
	}
	return new_str;
}
int main()
{
	//char* c = "guhikjbvgcf";
	size_t size_c = strLen("ojjjjjjooo");
	printf("%ld\n",size_c);
	char c1[]="hello word";
	char c2[] = "oooo";
	char* c_new = strCopy_ptr(c1, c2);
	printf("%s\n",c_new);
	return 0;
	
}
