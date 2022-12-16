#include "main.h"

int reduce(char **ptr)
{
	int *new_int;

	int buf, i;

	new_int = malloc(50);

	for (i = 0; *ptr[i] != '\0'; i++)
	{
		new_int[i] = atoi(ptr[i]);

	}

	printf("%ls", new_int);


	return(0);
}
