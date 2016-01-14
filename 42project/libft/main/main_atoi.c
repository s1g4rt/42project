#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
int atoi(const char *str);

int	main()
{
	char *str="Hello World!What are you doing there ?";
	printf("\n ft_atoi: %d\n",ft_atoi(str));
	printf("\n atoi: %d\n\n",atoi(str));
	return(0);
}
