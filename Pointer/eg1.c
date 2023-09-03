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
	printf("The value of num is: %d\n", num);
	/*Dereferencing with pointer*/
	*ptr = 600;
	printf("The value of num is: %d\n", num);
	printf("The value of num is: %d\n", *ptr);

	printf("----------------------------------\n");
	/*-------------Array---------*/

	int a[5];
	*a = 5;
	a[1] = 8;

	*(a + 2) = 9;
	printf("The index three is: %d\n", *(a + 2));
	printf("The first element is: %d\n", *a);



	return (0);
}
