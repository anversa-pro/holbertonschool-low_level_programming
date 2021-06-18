#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	/*var declaration*/
	char varchar;
	int varint;
	long varlong;
	long long varlongl;
	float varfloat;
	/*printing vars*/
	printf("Size of a char: %d byte(s)\n", sizeof(varchar));
	printf("Size of an int: %d byte(s)\n", sizeof(varint));
	printf("Size of a long int: %d byte(s)\n", sizeof(varlong));
	printf("Size of a long long int: %d byte(s)\n", sizeof(varlongl));
	printf("Size of a float: %d byte(s)\n", sizeof(varfloat));
	return (0);
}
