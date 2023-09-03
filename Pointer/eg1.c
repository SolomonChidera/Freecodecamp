#include <stdio.h>

int main(void)
{
	int num;
	num = 6;
	int *ptr;

	ptr = &num;
	printf("The pointer 'ptr' is: %p\n", ptr);
	printf("The address of num is: %p\n", &num);
	/*printing the value of num*/
	printf("The value of num is: %d\n",num);

	return (0);
}
