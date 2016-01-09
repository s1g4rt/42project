#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1,const char *s2);

int	main()
{
	char *s1="HellWorld";
	const char *s2="Bonjour";
	printf("\n ft_strcpy: %s\n", ft_strcpy(s1, s2));
	printf("\n strcpy: %s\n",strcpy(s1, s2));
	return(0);
}
