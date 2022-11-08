#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: String 1.
 * @s2: String 2 to be concatenated to s1.
 * Return: NULL on failure or concatenated string on Success.
*/

char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	int index = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	concatstr = malloc(sizeof(char) + (len1 + len2 + 1));
	if (concatstr == NULL)
		return (NULL);
	for (; index < (len1 + len2); index++)
	{
		if (index < len1)
		{
			concatstr[index] = *s1;
			s1++;
		}
		else
		{
			concatstr[index] = *s2;
			s2++;
		}
	}
	concatstr[index] = '\0';
	return (concatstr);
}
