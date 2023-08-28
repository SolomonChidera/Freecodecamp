#include "main.h"

int main(void)
{
	int digit = 42;
	printf("The address of digit = %p.", &digit);
	printf("The value of digit using indirection operator = %d.", *(&digit));
	return (0);
}
