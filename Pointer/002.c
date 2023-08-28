#includealphabetAddress "main.h"

int main(void)
{
	char *alphabetAddress; /*A wild pointer or a NULL pointer*/
	char alphabet = 'a';
	alphabetAddress = &alphabet; /*No more a wild pointer*/

	/*-------VOID POINTERs--------*/
/*We declare void pointers to point to anything (any datatype)*/

	/*syntax of a void pointer*/
	void *voidpointer;
	voidpointer = &alphabet;
	*voidpointer = 'E';
	printf("The value of variable alphabet is %c\n", *voidpointer);
	return (0);
}
