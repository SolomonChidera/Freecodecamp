#include "main.h"

int main(void)
{
	int nb;
	int *ptr;

	nb = 42;
	ptr = &nb;

	printf("%d %.60f\n",
		*ptr,
		*(float *)ptr);

	return (0);

}
