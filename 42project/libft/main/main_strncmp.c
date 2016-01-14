#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1,const char *s2, size_t n);

int	main()
{
	char *s1="Hello World !";
	char *s2="Hello World !";
	size_t n;

	n = 3;  
	printf("\n ft_strncmp: %d\n",ft_strncmp(s1,s2,n));
	printf("\n strncmp: %d\n",strncmp(s1,s2,n));
	return(0);
}
