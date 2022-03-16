#include "main.h"
/**
* main(void) - prints _putchar Followed by a new line
* return -  0 
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
