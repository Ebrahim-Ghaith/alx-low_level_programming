#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
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
