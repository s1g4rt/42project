#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main()
{
	char *str="Hello World!What are you doing there ?";
	char *to_find="Hello";
	printf("\n%s\n\n",ft_strstr(str,to_find));
	return(0);
}
