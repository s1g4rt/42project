#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main()
{
	int c = '@';
	printf("\n ft_tolower: %d\n", ft_tolower(c));
	printf("\n tolower: %d\n", tolower(c));	
	return(0);
}
