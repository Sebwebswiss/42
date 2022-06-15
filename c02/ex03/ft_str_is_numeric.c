// Create a function that returns 1 if the string given as a parameter contains only
// digits, and 0 if it contains any other character.
// It should return 1 if str is empty

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;

while (str[i] != '\0')
{
	if( (str[i] < '0' || str[i] > '9') && (str[i] < '0' || str[i] > '9'))
	{
		return (0);
	}

	i++;
}
	return (1);

}


int main()
{
	char str[] = "";
	
	printf( "%d \n", ft_str_is_numeric(str));

return (0) ;
}
