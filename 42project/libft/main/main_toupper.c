#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c);

int	main()
{
	int c = '5';
	printf("\n ft_toupper: %d\n", ft_toupper(c));
	printf("\n toupper: %d\n", toupper(c));
	return (0);
}
