#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if(str[i] < 32 || str[i] >= 127)
		{
		return (0);
		}
		

		i++;

	}

	return (1);
}


int main()
{

	char str[] = "\t";
 	printf("rezultat funkcije je %d \n ", ft_str_is_alpha(str));



return (0);
}
