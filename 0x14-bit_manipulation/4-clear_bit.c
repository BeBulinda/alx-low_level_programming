#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int clear_bit(unsigned long int* x, unsigned int my_index)
{
	if (my_index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*x &= ~(1 << my_index);

	return (1);
}
