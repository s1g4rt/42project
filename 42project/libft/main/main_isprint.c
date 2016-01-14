#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int main()
{
	int c = 127;
	printf("\n ft_isprint: %d\n", ft_isprint(c));
	printf("\n isprint: %d\n", isprint(c));
	return (0);
}
