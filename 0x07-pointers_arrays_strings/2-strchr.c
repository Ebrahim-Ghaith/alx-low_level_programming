#include "main.h"

/*
 * _strchr : return string of first chr to last of it
 * @s : input string
 * @c : character needed to be input
 * return : the first occurrence of the character c
 * 	    in the string s, or
 * 	    NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int len=0;
	int i;
	while(s[len])
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		if(s[i]==c)
		{
			s += i;
			return(s);
		}
	}
	return ('\0');
}
