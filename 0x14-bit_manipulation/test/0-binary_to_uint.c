#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
    if (b == NULL)
        return 0;
    for (; *b != '\0'; b++) {
        if (*b == '0' || *b == '1') {
            result = (result << 1) | (*b - '0');
        } else {
            return 0;
        }
    }
    return result;

}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("101");
    printf("%u\n", n);
}
