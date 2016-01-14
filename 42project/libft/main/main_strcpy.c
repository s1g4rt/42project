#include <stdio.h> 
#include <string.h> 
char	*ft_strcpy(char *dest,const char *src);

int	main()
{
	char *dest="EHelloee";
	const char *src="Bonjour";
	printf("\n ft_strcpy: %s\n", ft_strcpy(dest, src));
	printf("\n strcpy: %s\n", strcpy(dest, src));
	return(0);
}
