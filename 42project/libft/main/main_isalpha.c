#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c);

int main()
{
	int c = 'T';
	printf("\n ft_isalpha: %d\n", ft_isalpha(c));
	printf("\n isalpha: %d\n", isalpha(c));
	return (0);
}
