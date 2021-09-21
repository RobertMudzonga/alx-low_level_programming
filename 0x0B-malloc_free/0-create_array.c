#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array
* @size: size of array
* @c: charactor to point
* Return: NULL if size = 0 else return pointer to array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
if (size == 0)
return (NULL);
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
