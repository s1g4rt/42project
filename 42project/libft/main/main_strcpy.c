#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1,const char *s2);

int	main()
{
	char *s1="Hello";
	const char *s2="Bonjour";
	printf("\n strcpy: %s\n",strcpy(s1, s2));
	return(0);
}
