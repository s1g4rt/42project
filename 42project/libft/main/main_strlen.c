#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main()
{
	char *str="Hello World !";
	printf("\n ft_strlen: %lu\n",ft_strlen(str));
	printf("\n strlen: %lu\n",strlen(str));
	return(0);
}
