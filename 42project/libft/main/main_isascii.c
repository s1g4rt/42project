#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int ft_isascii(int c);
int isascii(int c);

int	main()
{
	int c = 'y';
	printf("\n ft_isascii: %d\n",ft_isascii(c));
	printf("\n isascii: %d\n\n",isascii(c));
	return(0);
}
