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
char* strCopy(char* c1 ,char* c2)
{
	size_t total_size = strLen(c1); 
	//char c[total_size];
	for(int i = 0; i < total_size; i++)
	{	
		c1[i] = c2[i];
	}
	return c1;
}
int main()
{
	//char* c = "guhikjbvgcf";
	size_t size_c = strLen("ojjjjjjooo");
	printf("%ld\n",size_c);
	char c1[]="hello word";
	char c2[] = "oooo";
	char* c_new = strCopy(c1, c2);
	printf("%s\n",c_new);
	return 0;
	
}
