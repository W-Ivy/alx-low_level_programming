#include "main.h"

/**
 * _islower ->  checks if the character is lowercase
 * @c: is the character
 * return : returns 1 if letter is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a'; &&c <= 'z')
		return (1);
	else
		return (0);
}
