#include <unistd.h>

int _putchar(char c)
{
	if(write(1, &c, 1))
		return (c);
	return (-1);
}
