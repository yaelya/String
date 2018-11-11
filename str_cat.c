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
char* strCat(char* dest ,char* sour)
{

	if(dest == NULL)
		return NULL;
	char* ptr=dest;
	while(*dest)
		*dest++;
	//printf("%s",dest);
	while(*sour)
		*dest++ = *sour++;
	return ptr;
}

int main()
{
	//char* c = "guhikjbvgcf";
	size_t size_c = strLen("ojjjjjjooo");
	printf("%ld\n",size_c);
	char c1[15]="hello word";
	char c2[] = "oooo";
	char* c_new = strCat(c1, c2);
	printf("%s\n",c_new);
	return 0;
	
}
