#include "main.h"
#include <stdio.h>
/*
 * strcat - concatenates two strings
 * @dest : string concatenates
 * @src : append it to string
 * return : a result of function
*/

char *_strcat(char *dest, char *src)
{
	i=0;
	i_length=0;
	while(dest[i_length]){
		i_length++;
	}
	for(i=0,src[i],i++){
		dest[i_length]=src[i];
		i_length++;
	}
	dest[i_length] = '\0';
	return (dest);
}
