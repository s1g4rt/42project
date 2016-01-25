#include <stdio.h>
#include <string.h>

void	ft_strclr(char *s);

int main()
{
	char *s;

	*s = 'B';
	printf("\n ft_strclr: %d\n", ft_strclr(s));
	return (0);
}
