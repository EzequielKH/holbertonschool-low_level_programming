#include <unistd.h>

int _putchar(char i)
{
	return write(1, &i, 1);
}
