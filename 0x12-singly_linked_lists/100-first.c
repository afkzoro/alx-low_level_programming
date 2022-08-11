#include "stdio.h"

void firstExec (void) __attribute__ ((constructor));

/**
	* first - Code executed before the main function
	* Return: void
	*/
void firstExec(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}