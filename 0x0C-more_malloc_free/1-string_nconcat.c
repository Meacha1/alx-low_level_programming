#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int i, j;
char *p;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i]; i++)
	;
for (j = 0; s2[j]; j++)
	;
p = malloc(sizeof(char) * i + sizeof(char) * j + 1);
if (p == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
p[i] = s1[i];
p[i] = '\0';
for (j = 0; j < n; j++, i++)
p[i] = s2[j];
p[i] = '\0';
return (p);
}
