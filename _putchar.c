#include "main.h"

/**
 * _putchar - funvtion to print a character stdout
 * @c:character to print
 *
 * Return:int data type
 */

int _putchar(char c)
{
	int ret;

	ret = write(1, &c, 1);

	return (ret);
}
