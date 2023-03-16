#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to a newly allocated space in memory,
 * which contain the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, index12, index = 0;
	char *constr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
	for (len2 = 0; s2[len2]; len2++)

	if (n < len2)
		constr = malloc(sizeof(char) * (len1 + n + 1));

	constr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (constr == NULL)
		return (NULL);

	for (index12 = 0; index12 < len1; index12++)
	{
		constr[index] = s1[index12];
		index++;
	}
	if (n < len2)
		for (index12 = 0; index12 < n; index12++)
		{
			constr[index] = s2[index12];
			index++;
		}
	else
		for (index12 = 0; index12 < len2; index12++)
		{
			constr[index] = s2[index12];
			index++;
		}
	constr[index] = '\0';
	return (constr);
}
