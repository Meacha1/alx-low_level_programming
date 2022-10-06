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

unsigned int i, j, k;
char *p;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i]; i++)
	;
for (k = 0; s2[k]; k++)
	;
p = malloc(sizeof(char) * i + sizeof(char) * k + 1);
if (p == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
p[i] = s1[i];
for (j = 0; j < n && j < k; j++, i++)
p[i] = s2[j];
p[i] = '\0';
return (p);
}
