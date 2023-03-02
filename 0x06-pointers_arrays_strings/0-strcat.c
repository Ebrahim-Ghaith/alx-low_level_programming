#include "main.h"

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
	while(dest[i++]){
		i_length++;
	}
	for(i=0,src[i],i++){
		dest[i_length]=src[i];
	}
	return (dest);
}
