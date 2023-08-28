#include "main.h"

int main(void)
{
	int digit = 42;
	printf("The address of digit = %p.\n", &digit);
	printf("The value of digit using indirection operator = %d.\n", *(&digit));
	int *addressOfDigit;
	*addressOfDigit = &digit;
	printf("Value of *addressOfDigit is the address of digit and here it is: %p.\n", addressOfDigit);

	return (0);
}
