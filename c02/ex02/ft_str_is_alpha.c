#include <stdio.h>

//Create a function that returns 1 if the string given as a parameter contains only
//alphabetical characters, and 0 if it contains any other character.

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
// ako je prvi kar (manji od 'a' ili veci od 'z' ) i ako je (prvi kar manji od 'A' ili veci od 'Z') vrati 0; 
		if((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z' ))
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
 	printf("rezultat funkcije je %d \n ", ft_str_is_alpha(str));



return (0);
}
