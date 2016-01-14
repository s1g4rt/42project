#include <stdio.h>

int		ft_strcmp(const char *s1,const char *s2);

int	main()
{
	char *s1="Hello Wo !";
	char *s2="Hello World !";
	printf("\n%d\n",ft_strcmp(s1,s2));
	return(0);
}
