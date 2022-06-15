// Create a function that returns 1 if the string given as a parameter contains only
// lowercase alphabetical characters, and 0 if it contains any other character

#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
	if( str[i] < 'a' || str[i]  > 'z' )
		{	
		return (0);
		}
	i++;
	}

	return (1);
}


int main ()
{
	char str[] = "";
	printf("%d \n", ft_str_is_lowercase(str));
return (0);

}
