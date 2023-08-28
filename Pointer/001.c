#include "main.h"

int main(void)
{
	int digit = 42;
	printf("The address of digit = %p.\n", &digit);
	printf("The value of digit using indirection operator = %d.\n", *(&digit));
	return (0);
}
