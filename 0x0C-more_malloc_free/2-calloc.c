#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 * @a: memory area
 * @b: constant byte
 * @i: bytes of the memory area
 * Return: pointer to the memory area a
 */
char *_memset(char *a, char b, unsigned int i)
{
	char *ptr = a;

	while (i--)
		*a++ = b;
	return (ptr);
}
