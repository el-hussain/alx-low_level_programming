#include "main.h"

/**
 * print_alphabet - Prints all lowercase alphabets from a-z,
 *                  followed by a new line.
 */

void print_alphabet(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
_putchar(lower);
}
_putchar('\n');
}
