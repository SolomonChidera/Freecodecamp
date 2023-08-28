#include "main.h"

/*Dangling pointer*/

int main(void)
{
	int *ptr;
	ptr = (int *)malloc(sizeof(int));
	*ptr = 1;
	printf("%d\n", *ptr);/*prints 1*/
	free(ptr);
	*ptr = 5;
	printf("%d\n", *ptr);/*may or may not print 5*/
	return (0);
}
