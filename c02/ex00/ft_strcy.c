#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while(src[i] !='\0')  // dok src ne dodje do kraja.. uradi!
	{
		dest[i] = src[i]; // i =0  krug src[0] ide u  dest[0]
		i++; // i je jedan    i = 1 krug src[1] ide u dest[0]
	}			//    i =  2 krug src[2] ide u dest[2] ..
	dest[i]= '\0';       // i je 3 i dodaje se karj na dest[3] \0

	return (dest);
}

int main()
{

	char src[] = "ovo je moj prvi uspjeh u prograiranju!!!!!! hvala ti boze!!t@vogsphere.42lausanne.ch:vogsphere/intra-uuid-aaeb0ec9-3d40-461a-9563-b318c8ba2621-4174718-szunec";
	char dest[10];

	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
