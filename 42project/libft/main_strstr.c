#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
char *strstr(const char *str, const char *to_find);

int	main()
{
	char *str="BlorHelloWorld";
	char *to_find="HelloWorld";
	printf("\n ft_strstr: %s\n",ft_strstr(str, to_find));
	printf("\n strstr: %s\n",strstr(str, to_find));
	return(0);
}
