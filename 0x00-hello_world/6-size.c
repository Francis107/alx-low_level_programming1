#include <stdio.h>

/**
* main - print print the string in the function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %id byte(s)\n", sizeof(c));
	printf("size of an int: %id byte(s)\n", sizeof(i));
	printf("size of a long int: %id byte(s)\n", sizeof(li));
	printf("size of a long long int: %id byte(s)\n", sizeof(lli));
	printf("size of a float: %id byte(s)", sizeof(f));
	return (0);
}
