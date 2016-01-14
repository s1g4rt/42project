#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c);

int	main()
{
	int c = 'a';
	printf("\n ft_isdigit: %d\n", ft_isdigit(c));
	printf("\n isdigit: %d\n", isdigit(c)); 
	return (0);
}
