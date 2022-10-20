#include "lists.h"

void __attribute__((constructor)) stead(void);

/**
 * stead - prints a string before executing the main function
 */
void stead(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
